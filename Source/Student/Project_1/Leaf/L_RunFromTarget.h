#pragma once
#include "BehaviorNode.h"

class L_RunFromTarget : public BaseNode<L_RunFromTarget>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;

private:
    size_t targetAgent;
};