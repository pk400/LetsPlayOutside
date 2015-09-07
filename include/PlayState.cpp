
#include "states/PlayState.hpp"

PlayState::PlayState() {
    background.setGameObject("assets/backgrounds/bg_mountains.png");

    // TODO: change this to player position
    camera = new Camera(sf::Vector2f(100.f, 100.f), sf::Vector2f(400.f, 240.f));
}

int PlayState::handleInput() {
    return 0;
}

void PlayState::update(float deltatime) {

}

void PlayState::render(sf::RenderWindow& gamewindow) {
    gamewindow.clear(sf::Color::Red);

    gamewindow.draw(background.getSprite());
    gamewindow.setView(camera->getView());
}
