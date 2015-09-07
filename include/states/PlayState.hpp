
#ifndef PLAYSTATE_HPP
#define PLAYSTATE_HPP

#include "../handlers/State.hpp"
#include "../objects/Background.hpp"
#include "../handlers/Camera.hpp"

class PlayState : public State {
public:
    PlayState();
    int handleInput();
    void update(float deltatime);
    void render(sf::RenderWindow& gamewindow);
private:
    Background background;
    Camera* camera;
};

#endif /* PLAYSTATE_HPP */
