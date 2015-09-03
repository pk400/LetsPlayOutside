
#ifndef STATE_HPP
#define STATE_HPP

#include <SFML/Graphics.hpp>

class State {
public:
    virtual int handleInput() = 0;
    virtual void update(float deltatime) = 0;
    virtual void render(sf::RenderWindow& gamewindow) = 0;
};

#endif /* STATE_HPP */
