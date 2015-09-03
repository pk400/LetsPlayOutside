
#include "handlers/GameStateHandler.hpp"
#include "states/MenuState.hpp"

GameStateHandler::GameStateHandler() {
    State* menustate = new MenuState();
    gamestates.push(menustate);
}
