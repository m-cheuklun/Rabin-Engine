#include <pch.h>
#include "L_SpeedUpGame.h"
#include "Agent/BehaviorAgent.h"

void L_SpeedUpGame::on_enter()
{
	BehaviorNode::on_leaf_enter();
}

void L_SpeedUpGame::on_update(float dt)
{
    // get a list of all current agents
    const auto& allAgents = agents->get_all_agents();

    for (const auto& a : allAgents)
        a->set_movement_speed(15);

    on_success();
    display_leaf_text();
}

