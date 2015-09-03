
#include "states/PlayState.hpp"

PlayState::PlayState() {

}

int PlayState::handleInput() {
    return 0;
}

void PlayState::update(float deltatime) {

}

void PlayState::render(sf::RenderWindow& gamewindow) {
    gamewindow.clear(sf::Color::Red);
}
