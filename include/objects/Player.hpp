
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "GameObject.hpp"

class Player : public GameObject {
public:
    Player();
    void setGameObject(const std::string texturepath);
    int handleInput();
    void update(float deltatime);
    void render(sf::RenderWindow& gamewindow);

    sf::Vector2f getPosition() { return position; }
    sf::Vector2f getVelocity() { return velocity; }
    sf::Vector2f getGravity() { return gravity; }

    void moveLeft(float dt);
    void moveRight(float dt);
    void jump(float dt);
private:
    sf::Vector2f position;
    sf::Vector2f velocity;
    sf::Vector2f gravity;
    float maxSpeed = 200.f;
    std::string stateText;
    bool isStanding;
    bool isMovingLeft;
    bool isMovingRight;
    bool isJumping;
    bool isAtVerticalPeak;
};

#endif /* PLAYER_HPP */
