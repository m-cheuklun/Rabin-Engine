#include <pch.h>
#include "Projects/ProjectOne.h"
#include "Agent/CameraAgent.h"
#include "utility.h"

void ProjectOne::setup()
{
    // SETUP VARIABLES
    // spawn
    Vec3 rockSpawn{ 0.f, 0.f, 50.f };
    Vec3 scissorSpawn{ 99.f, 0.f, 0.f };
    //Vec3 paperSpawn{ 50.f, 0.f, 50.f };
    Vec3 paperSpawn{ 99.f, 0.f, 99.f };

    // max entities
    short MaxRock{15};
    short MaxScissor{15};
    short MaxPaper{15};

    // Create your inital agents
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
    //terrain->pathLayer.set_value(0, 0, Colors::Red);

    // camera position can be modified from this default as well
    auto camera = agents->get_camera_agent();
    camera->set_position(Vec3(-62.0f, 70.0f, terrain->mapSizeInWorld * 0.5f));
    camera->set_pitch(0.610865); // 35 degrees

    audioManager->SetVolume(0.5f);
    //audioManager->PlaySoundEffect(L"Assets\\Audio\\retro.wav");
    // uncomment for example on playing music in the engine (must be .wav)
    //audioManager->PlayMusic(L"Assets\\Audio\\motivate.wav");
    // audioManager->PauseMusic(...);
    // audioManager->ResumeMusic(...);
    // audioManager->StopMusic(...);
}