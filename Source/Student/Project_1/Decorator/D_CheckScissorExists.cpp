#include <pch.h>
#include "D_CheckScissorExists.h"
#include "utility.h"

void D_CheckScissorExists::on_enter() {
    // get a list of all current agents
    const auto& allAgents = agents->get_all_agents_by_type(typeScissor);

    if (allAgents.empty()) {
        on_failure();
        return;
    }
    BehaviorNode::on_enter();
}

void D_CheckScissorExists::on_update(float dt)
{
    BehaviorNode* child = children.front();

    child->tick(dt);

    // assume same status as child
    set_status(child->get_status());
    set_result(child->get_result());
}