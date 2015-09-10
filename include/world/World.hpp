
#ifndef WORLD_HPP
#define WORLD_HPP

#include <SFML/Graphics.hpp>
#include <stack>

#include "../objects/Background.hpp"
#include "../objects/Platform.hpp"

class World {
public:
    World(int levelid);
    void render(sf::RenderWindow& gamewindow);
private:
    Background background;
    Platform platform;
};

#endif /* WORLD_HPP */
