#include <pch.h>
#include "D_CheckVictory.h"
#include "utility.h"

void D_CheckVictory::on_enter() {
    // get a list of all current agents
    const auto& allScissorAgents = agents->get_all_agents_by_type(typeScissor);
    const auto& allRockAgents = agents->get_all_agents_by_type(typeRock);
    const auto& allPaperAgents = agents->get_all_agents_by_type(typePaper);

    short counter{};

    if (allScissorAgents.empty()) ++counter;
    if (allRockAgents.empty()) ++counter;
    if (allPaperAgents.empty()) ++counter;

    if (counter == 2) {
        BehaviorNode::on_enter();
        return;
    }

    BehaviorNode::on_failure();
}

void D_CheckVictory::on_update(float dt)
{
    BehaviorNode* child = children.front();

    child->tick(dt);

    // assume same status as child
    set_status(child->get_status());
    set_result(child->get_result());
}