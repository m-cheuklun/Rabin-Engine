#include <pch.h>
#include "L_LeaveFootprint.h"
#include "Agent/BehaviorAgent.h"

void L_LeaveFootprint::on_enter()
{
    BehaviorNode::on_leaf_enter();
}

void L_LeaveFootprint::on_update(float dt)
{
    terrain->set_color(terrain->get_grid_position(agent->get_position()), Colors::Wheat);
    on_success();
    display_leaf_text();
}

