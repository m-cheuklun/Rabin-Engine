#pragma once
#include "BehaviorNode.h"

class D_RunOnce : public BaseNode<D_RunOnce>
{
public:
    D_RunOnce();

protected:
    unsigned counter;

    virtual void on_enter() override;
    virtual void on_update(float dt) override;
};