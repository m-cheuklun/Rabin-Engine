#include <pch.h>
#include "utility.h"

void utils::leaveFootprint(BehaviorAgent* agent) {
    Color color;
    switch (*(agent->get_type()))
    {
    case *typeRock:
        color = Colors::Blue;
        break;
    case *typePaper:
        color = Colors::Red;
        break;
    case *typeScissor:
        color = Colors::Silver;
        break;
    default: // Should never happen
        color = Colors::Black;
        break;
    }
    terrain->set_color(terrain->get_grid_position(agent->get_position()), color);
}