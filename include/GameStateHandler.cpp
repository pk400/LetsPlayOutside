
#include "handlers/GameStateHandler.hpp"
#include "states/MenuState.hpp"
#include "states/PlayState.hpp"

GameStateHandler::GameStateHandler() {
    /*State* menustate = new MenuState();
    gamestates.push(menustate);*/

    State* playstate = new PlayState();
    gamestates.push(playstate);
}

void GameStateHandler::update(float deltatime) {
    gamestates.top()->update(deltatime);
}

int GameStateHandler::handleInput() {
    return gamestates.top()->handleInput();
}

void GameStateHandler::render(sf::RenderWindow& gamewindow) {
    gamestates.top()->render(gamewindow);
}
