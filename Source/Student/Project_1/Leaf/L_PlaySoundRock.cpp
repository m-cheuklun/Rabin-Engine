#include <pch.h>
#include "L_PlaySoundRock.h"

void L_PlaySoundRock::on_enter()
{
	audioManager->PlaySoundEffect(L"Assets\\Audio\\rockSound.wav");
	BehaviorNode::on_leaf_enter();
	on_success();
}