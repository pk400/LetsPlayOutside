
#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>

static int WINDOW_WIDTH = 800.f;
static int WINDOW_HEIGHT = 480.f;

#include "handlers/GameStateHandler.hpp"

class Game {
public:
    Game();
    int exec();
    void handleInput();
    void update(float deltatime);
    void render();
private:
    sf::RenderWindow* gamewindow;
    GameStateHandler* gamestatehandler;
};

#endif /* GAME_HPP */
