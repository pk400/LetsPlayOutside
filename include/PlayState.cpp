
#include "states/PlayState.hpp"

PlayState::PlayState() {
    world = new World(0);

    // TODO: change this to player position
    camera = new Camera(sf::Vector2f(400.f, 120.f), sf::Vector2f(800 / 1.5, 480 / 1.5f));
    player = new Player();
    player->setGameObject("assets/sprites/spritesheet.png");
}

int PlayState::handleInput() {
    return player->handleInput();
}

void PlayState::update(float deltatime) {
    player->update(deltatime);
}

void PlayState::render(sf::RenderWindow& gamewindow) {
    world->render(gamewindow);
    player->render(gamewindow);

    //gamewindow.setView(camera->getView());
}
