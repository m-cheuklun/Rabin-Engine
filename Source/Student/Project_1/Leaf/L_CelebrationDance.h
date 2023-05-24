#pragma once
#include "BehaviorNode.h"

class L_CelebrationDance : public BaseNode<L_CelebrationDance>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
};