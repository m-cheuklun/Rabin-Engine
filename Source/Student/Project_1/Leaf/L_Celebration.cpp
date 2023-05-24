#include <pch.h>
#include "L_Celebration.h"
#include "Agent/BehaviorAgent.h"
#include "utility.h"

void L_Celebration::on_enter()
{
    audioManager->PlayMusic(L"Assets\\Audio\\motivate.wav");
	BehaviorNode::on_leaf_enter();
    on_success();
}