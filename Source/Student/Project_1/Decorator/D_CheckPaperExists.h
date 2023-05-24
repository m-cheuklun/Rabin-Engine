#pragma once
#include "BehaviorNode.h"

class D_CheckPaperExists : public BaseNode<D_CheckPaperExists>
{
protected:
    virtual void on_enter() override;
    virtual void on_update(float dt) override;
};