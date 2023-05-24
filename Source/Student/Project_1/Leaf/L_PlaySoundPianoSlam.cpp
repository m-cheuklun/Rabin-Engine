#include <pch.h>
#include "L_PlaySoundPianoSlam.h"

void L_PlaySoundPianoSlam::on_enter()
{
	audioManager->PlaySoundEffect(L"Assets\\Audio\\pianoSlam.wav");
	BehaviorNode::on_leaf_enter();
	on_success();
}