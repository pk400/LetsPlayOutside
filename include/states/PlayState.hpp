
#ifndef PLAYSTATE_HPP
#define PLAYSTATE_HPP

#include "../handlers/State.hpp"

class PlayState : public State {
public:
    PlayState();
    int handleInput();
    void update(float deltatime);
    void render(sf::RenderWindow& gamewindow);
private:
};

#endif /* PLAYSTATE_HPP */
