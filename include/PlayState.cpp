
#include "states/PlayState.hpp"

PlayState::PlayState() {
    world = new World(0);

    // TODO: change this to player position
    camera = new Camera(sf::Vector2f(400.f, 120.f), sf::Vector2f(800 / 1.5, 480 / 1.5f));
}

int PlayState::handleInput() {
    return 0;
}

void PlayState::update(float deltatime) {

}

void PlayState::render(sf::RenderWindow& gamewindow) {
    world->render(gamewindow);

    //gamewindow.setView(camera->getView());
}
