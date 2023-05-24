#pragma once
#include "BehaviorNode.h"

class L_PursueClosestScissor : public BaseNode<L_PursueClosestScissor>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;

private:
    size_t targetAgent;
};