#pragma once
#include "BehaviorNode.h"

class D_CheckIfScissorCloseProximity : public BaseNode<D_CheckIfScissorCloseProximity>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
private:
    Vec3 targetPoint;
};