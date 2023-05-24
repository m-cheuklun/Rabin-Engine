#include <pch.h>
#include "L_Celebration.h"
#include "Agent/BehaviorAgent.h"
#include "utility.h"

void L_Celebration::on_enter()
{
    audioManager->StopMusic(L"Assets\\Audio\\rushE.wav");
    audioManager->PlayMusic(L"Assets\\Audio\\rushEend.wav", true);
	BehaviorNode::on_leaf_enter();
    on_success();
}