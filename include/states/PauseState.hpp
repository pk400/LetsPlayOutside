
#ifndef PAUSESTATE_HPP
#define PAUSESTATE_HPP

#include "../handlers/State.hpp"

class PauseState : public State {
public:
    int handleInput();
    void update(float deltatime);
    void render(sf::RenderWindow& gamewindow);
private:
};

#endif /* PAUSESTATE_HPP */
