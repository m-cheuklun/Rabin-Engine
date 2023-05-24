#include <pch.h>
#include "L_PlaySoundScissor.h"

void L_PlaySoundScissor::on_enter()
{
	audioManager->PlaySoundEffect(L"Assets\\Audio\\scissorSound.wav");
	BehaviorNode::on_leaf_enter();
	on_success();
}