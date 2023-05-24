#pragma once
#include "BehaviorNode.h"

class D_CheckIfRockCloseProximity : public BaseNode<D_CheckIfRockCloseProximity>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
private:
    Vec3 targetPoint;
};