#pragma once
#include "BehaviorNode.h"

class L_SlowDownGame : public BaseNode<L_SlowDownGame>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
};