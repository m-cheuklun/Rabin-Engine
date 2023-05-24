#pragma once
#include "BehaviorNode.h"

class L_SpeedUpGame : public BaseNode<L_SpeedUpGame>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
};