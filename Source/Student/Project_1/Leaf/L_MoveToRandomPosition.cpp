#include <pch.h>
#include "L_MoveToRandomPosition.h"
#include "Agent/BehaviorAgent.h"
#include "utility.h"

void L_MoveToRandomPosition::on_enter()
{
    // set animation, speed, etc

    targetPoint = RNG::world_position();
    //agent->look_at_point(targetPoint);

	BehaviorNode::on_leaf_enter();
}

void L_MoveToRandomPosition::on_update(float dt)
{
    utils::leaveFootprint(agent);

    const auto result = agent->move_toward_point(targetPoint, dt);

    if (result == true)
    {
        on_success();
    }

    display_leaf_text();
}
