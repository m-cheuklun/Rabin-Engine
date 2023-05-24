#pragma once
#ifndef UTILITY_H
#define UTILITY_H
#include "Agent/BehaviorAgent.h"

constexpr char* typeRock = "rock";;
constexpr char* typePaper = "paper";;
constexpr char* typeScissor = "scissor";;
constexpr float agentRadius = 1.f;;
constexpr float searchProximity = 20.f;;

namespace utils {
	void leaveFootprint(BehaviorAgent*);
}

#endif // !UTILITY_H
