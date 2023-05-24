#pragma once
// Include all node headers in this file

// Example Control Flow Nodes
#include "ControlFlow/C_ParallelSequencer.h"
#include "ControlFlow/C_RandomSelector.h"
#include "ControlFlow/C_Selector.h"
#include "ControlFlow/C_Sequencer.h"

// Student Control Flow Nodes

// Example Decorator Nodes
#include "Decorator/D_Delay.h"
#include "Decorator/D_InvertedRepeater.h"
#include "Decorator/D_RepeatFourTimes.h"

// Student Decorator Nodes
#include "Decorator/D_AlwaysFail.h" // delete later
#include "Decorator/D_CheckPaperExists.h"
#include "Decorator/D_CheckRockExists.h"
#include "Decorator/D_CheckScissorExists.h"
#include "Decorator/D_CheckIfPaperCloseProximity.h" // delete later
#include "Decorator/D_CheckIfRockCloseProximity.h"  // delete later
#include "Decorator/D_CheckIfScissorCloseProximity.h"  // delete later
#include "Decorator/D_RunOnce.h"
#include "Decorator/D_Inverter.h" // delete later

// Example Leaf Nodes
#include "Leaf/L_CheckMouseClick.h"
#include "Leaf/L_Idle.h"
#include "Leaf/L_MoveToFurthestAgent.h"
#include "Leaf/L_MoveToMouseClick.h"
#include "Leaf/L_MoveToRandomPosition.h"
#include "Leaf/L_PlaySound.h"

// Student Leaf Nodes
#include "Leaf/L_LeaveFootprint.h" // delete later
#include "Leaf/L_RunFromTarget.h" // delete later
#include "Leaf/L_PursueClosestRock.h"
#include "Leaf/L_PursueClosestScissor.h"
#include "Leaf/L_PursueClosestPaper.h"
#include "Leaf/L_Celebration.h" // delete later