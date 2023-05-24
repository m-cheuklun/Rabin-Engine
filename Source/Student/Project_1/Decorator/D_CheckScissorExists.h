#pragma once
#include "BehaviorNode.h"

class D_CheckScissorExists : public BaseNode<D_CheckScissorExists>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
};