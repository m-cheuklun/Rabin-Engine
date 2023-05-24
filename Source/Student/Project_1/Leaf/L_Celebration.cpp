#include <pch.h>
#include "L_Celebration.h"
#include "Agent/BehaviorAgent.h"
#include "utility.h"

void L_Celebration::on_enter()
{
    // set animation, speed, etc
    agent->set_movement_speed(20);

    targetPoint = RNG::world_position();

	BehaviorNode::on_leaf_enter();
}

void L_Celebration::on_update(float dt)
{
    utils::leaveFootprint(agent);

    const auto result = agent->move_toward_point(targetPoint, dt);
    agent->set_roll(3.14f / dt);

    if (result == true)
    {
        on_success();
    }

    display_leaf_text();
}
