#include <pch.h>
#include "D_RunOnce.h"

D_RunOnce::D_RunOnce() : counter(0)
{}

void D_RunOnce::on_enter()
{
    if (counter == 1) {
        on_failure();
        return;
    }
    ++counter;
    BehaviorNode::on_enter();
}

void D_RunOnce::on_update(float dt)
{
    // repeat the child until 4 successes, stop on any failure
    BehaviorNode *child = children.front();

    child->tick(dt);

    // assume same status as child
    set_status(child->get_status());
    set_result(child->get_result());
}
