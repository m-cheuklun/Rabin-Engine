#pragma once
#ifndef UTILITY_H
#define UTILITY_H
#include "Agent/BehaviorAgent.h"

constexpr char* typeRock{ "rock" };;
constexpr char* typePaper{ "paper" };;
constexpr char* typeScissor{ "scissor" };;

constexpr short MaxRock{ 30 };;
constexpr short MaxScissor{ 30 };
constexpr short MaxPaper{ 30 };
constexpr short MaxAgents{ MaxRock + MaxScissor + MaxPaper };;

constexpr float agentRadius = 1.f;;

namespace utils {
	void leaveFootprint(BehaviorAgent*);
}

#endif // !UTILITY_H
