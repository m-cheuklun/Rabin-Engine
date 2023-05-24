#include <pch.h>
#include "L_RunFromTarget.h"
#include "Agent/BehaviorAgent.h"
#include "utility.h"

void L_RunFromTarget::on_enter()
{
    targetAgent = agent->get_blackboard().get_value<size_t>("target");
    BehaviorNode::on_leaf_enter();
}

void L_RunFromTarget::on_update(float dt)
{
    utils::leaveFootprint(agent);

    Agent* target = agents->searchAgentTypeWithID(agent->get_blackboard().get_value<size_t>("target"), typeRock);
    if (target == nullptr) {
        on_failure();
        return;
    }

    // if code reaches here, target is still alive
    // move away from target
    Vec3 moveDirection = agent->get_position() - target->get_position();
    const auto result = agent->move_toward_point(moveDirection, dt);

    if (result == true)
        on_success();

    display_leaf_text();
}