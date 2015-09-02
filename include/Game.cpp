
#include "Game.hpp"

Game::Game()
    : gamewindow(new sf::RenderWindow()), gamestatehandler(new GameStateHandler()) {
    gamewindow->create(sf::VideoMode(800, 480), "Let's Play Outside");
    gamewindow->setVerticalSyncEnabled(true);
    gamewindow->setFramerateLimit(60);
}

int Game::exec() {
    sf::Clock clock;
    while(gamewindow->isOpen()) {
        deltatime = clock.restart().asSeconds();

        if(deltatime > 0.15f)
            deltatime = 0.15f;

        handleInput();
        update();
        render();
    }

    return EXIT_SUCCESS;
}

void Game::handleInput() {
    sf::Event event;

    while(gamewindow->pollEvent(event)) {
        switch(event.type) {
            case sf::Event::Closed:
                gamewindow->close();
                break;
        }
    }
}

void Game::update() {}

void Game::render() {
    gamewindow->clear(sf::Color::White);
    gamewindow->display();
}
