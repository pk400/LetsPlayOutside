
#ifndef PLAYSTATE_HPP
#define PLAYSTATE_HPP

#include "../handlers/State.hpp"
#include "../world/World.hpp"
#include "../objects/Player.hpp"
#include "../handlers/Camera.hpp"

class PlayState : public State {
public:
    PlayState();
    int handleInput();
    void update(float deltatime);
    void render(sf::RenderWindow& gamewindow);
private:
    World* world;
    Player* player;
    Camera* camera;
};

#endif /* PLAYSTATE_HPP */
