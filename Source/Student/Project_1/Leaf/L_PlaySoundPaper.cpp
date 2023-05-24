#include <pch.h>
#include "L_PlaySoundPaper.h"

void L_PlaySoundPaper::on_enter()
{
	audioManager->PlaySoundEffect(L"Assets\\Audio\\paperSound.wav");
	BehaviorNode::on_leaf_enter();
	on_success();
}