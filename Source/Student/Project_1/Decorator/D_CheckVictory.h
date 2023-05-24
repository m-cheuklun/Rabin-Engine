#pragma once
#include "BehaviorNode.h"

class D_CheckVictory : public BaseNode<D_CheckVictory>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
};