
#include <SFML/Graphics.hpp>

#include "handlers/GameStateHandler.hpp"

class Game {
public:
    Game();
    int exec();
    void handleInput();
    void update();
    void render();
private:
    sf::RenderWindow* gamewindow;
    GameStateHandler* gamestatehandler;
    float deltatime;
};
