#include <pch.h>
#include "L_CelebrationDance.h"
#include "Agent/BehaviorAgent.h"

void L_CelebrationDance::on_enter()
{
	BehaviorNode::on_leaf_enter();
}

void L_CelebrationDance::on_update(float dt)
{
    // get a list of all current agents
    const auto& allAgents = agents->get_all_agents();

    for (const auto& a : allAgents) {
        a->set_movement_speed(50);
        Color color = RNG::color();
        a->set_roll(RNG::range(0.f, 3.1415f));
    }
    on_success();
    display_leaf_text();
}

