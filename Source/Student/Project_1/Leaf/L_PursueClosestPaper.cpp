#include <pch.h>
#include "L_PursueClosestPaper.h"
#include "Agent/BehaviorAgent.h"
#include "utility.h"

void L_PursueClosestPaper::on_enter()
{
    // set animation, speed, etc

    // find the agent that is the furthest from this one
    float shortestDistance = std::numeric_limits<float>().max();
    size_t agentID;
    bool targetFound = false;

    // get a list of all current agents
    const auto& allAgents = agents->get_all_agents_by_type(typePaper);

    // and our agent's position
    const auto& currPos = agent->get_position();

    for (const auto& a : allAgents)
    {
        // make sure it's not our agent
        if (a != agent)
        {
            const auto& agentPos = a->get_position();
            const float distance = Vec3::Distance(currPos, agentPos);

            if (distance < shortestDistance)
            {
                shortestDistance = distance;
                agentID = a->get_id();
                targetFound = true;
            }
        }
    }

    if (targetFound == true)
    {
        targetAgent = agentID;
        BehaviorNode::on_leaf_enter();
    }
    else // couldn't find a viable agent
    {
        on_failure();
    }
}

void L_PursueClosestPaper::on_update(float dt)
{
    utils::leaveFootprint(agent);

    Agent* target = agents->searchAgentTypeWithID(targetAgent, typePaper);
    if (target == nullptr) {
        on_failure();
        return;
    }

    // if code reaches here, target is still alive
    const auto result = agent->move_toward_point(target->get_position(), dt);

    if (result == true)
        on_success();

    display_leaf_text();
}