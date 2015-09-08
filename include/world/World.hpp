
#ifndef WORLD_HPP
#define WORLD_HPP

#include <SFML/Graphics.hpp>

#include "../objects/Background.hpp"

class World {
public:
    World(int levelid);
    void render(sf::RenderWindow& gamewindow);
private:
    Background background;
};

#endif /* WORLD_HPP */
