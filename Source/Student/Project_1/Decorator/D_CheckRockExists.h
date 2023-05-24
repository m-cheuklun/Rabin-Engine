#pragma once
#include "BehaviorNode.h"

class D_CheckRockExists : public BaseNode<D_CheckRockExists>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
};