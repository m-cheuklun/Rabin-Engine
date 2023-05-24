#pragma once
#include "BehaviorNode.h"

class D_CheckIfPaperCloseProximity : public BaseNode<D_CheckIfPaperCloseProximity>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
private:
    Vec3 targetPoint;
};