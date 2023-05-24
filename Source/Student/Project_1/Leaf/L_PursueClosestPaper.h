#pragma once
#include "BehaviorNode.h"

class L_PursueClosestPaper : public BaseNode<L_PursueClosestPaper>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;

private:
    size_t targetAgent;
};