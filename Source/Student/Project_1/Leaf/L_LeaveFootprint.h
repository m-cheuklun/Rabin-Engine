#pragma once
#include "BehaviorNode.h"

class L_LeaveFootprint : public BaseNode<L_LeaveFootprint>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;

private:
};