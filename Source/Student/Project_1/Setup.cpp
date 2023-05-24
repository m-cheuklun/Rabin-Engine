#include <pch.h>
#include "Projects/ProjectOne.h"
#include "Agent/CameraAgent.h"
#include "utility.h"

void ProjectOne::setup()
{
    // SETUP VARIABLES
    // max entities
    short MaxRock{13};
    short MaxScissor{13};
    short MaxPaper{13};

    // Create your inital agents
    agents->create_behavior_agent("gameMaster", BehaviorTreeTypes::gameMaster)->set_position(Vec3{ 0, -100, 0 });
    for (short i = 0; i < MaxRock; ++i) agents->spawn_game_agent(typeRock, RNG::world_position());
    for (short i = 0; i < MaxScissor; ++i) agents->spawn_game_agent(typeScissor, RNG::world_position());
    for (short i = 0; i < MaxPaper; ++i) agents->spawn_game_agent(typePaper, RNG::world_position());

    // you can technically load any map you want, even create your own map file,
    // but behavior agents won't actually avoid walls or anything special, unless you code that yourself
    // that's the realm of project 2 though
    terrain->goto_map(0);
    
    // you can also enable the pathing layer and set grid square colors as you see fit
    // works best with map 0, the completely blank map
    terrain->pathLayer.set_enabled(true);

    // camera position can be modified from this default as well
    auto camera = agents->get_camera_agent();
    camera->set_position(Vec3(-62.0f, 70.0f, terrain->mapSizeInWorld * 0.5f));
    camera->set_pitch(0.610865); // 35 degrees

    audioManager->SetVolume(0.5f);
    //audioManager->PlaySoundEffect(L"Assets\\Audio\\retro.wav");
    // uncomment for example on playing music in the engine (must be .wav)
    //audioManager->PlayMusic(L"Assets\\Audio\\motivate.wav");
}