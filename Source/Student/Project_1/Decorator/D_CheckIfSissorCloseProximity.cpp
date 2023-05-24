#include <pch.h>
#include "D_CheckIfScissorCloseProximity.h"
#include "utility.h"

void D_CheckIfScissorCloseProximity::on_enter() {
    // get a list of all scissor agents
    const auto& allAgents = agents->get_all_agents_by_type(typeScissor);

    // and our agent's position
    const auto& currPos = agent->get_position();

    for (const auto& a : allAgents)
    {
        // make sure it's not our agent
        if (a == agent) continue;

        const auto& agentPos = a->get_position();
        const float distance = Vec3::Distance(currPos, agentPos);

        if (distance < searchProximity) {
            agent->get_blackboard().set_value("target", a->get_id());
            BehaviorNode::on_enter();
            return;
        }
    }

    on_failure();
}

void D_CheckIfScissorCloseProximity::on_update(float dt)
{
    BehaviorNode* child = children.front();

    child->tick(dt);

    // assume same status as child
    set_status(child->get_status());
    set_result(child->get_result());
}