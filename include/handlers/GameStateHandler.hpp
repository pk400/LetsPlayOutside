
#ifndef GAMESTATEHANDLER_HPP
#define GAMESTATEHANDLER_HPP

#include <SFML/Graphics.hpp>
#include <stack>

#include "State.hpp"

class GameStateHandler {
public:
    GameStateHandler();
    int getNumStates() { return gamestates.size(); }
private:
    std::stack<State*> gamestates;
};

#endif /* GAMESTATEHANDLER_HPP */
