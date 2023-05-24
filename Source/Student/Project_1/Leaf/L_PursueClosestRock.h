#pragma once
#include "BehaviorNode.h"

class L_PursueClosestRock : public BaseNode<L_PursueClosestRock>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;

private:
    size_t targetAgent;
};