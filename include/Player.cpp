
#include "objects/Player.hpp"
#include "game.hpp"

Player::Player()
    : position((WINDOW_WIDTH / 2) - 32, (WINDOW_HEIGHT - 32)),
    velocity(10.f, 0.f),
    gravity(0.f, 50.f),
    isStanding(false),
    isMovingLeft(false),
    isMovingRight(false),
    isJumping(false),
    isAtVerticalPeak(false) {
}

void Player::setGameObject(const std::string texturepath) {
    setTexture(texturepath);

    setSprite();
    sprite.setTextureRect(sf::IntRect(0, 32, 32, 32));
}

int Player::handleInput() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        isMovingLeft = true;
    } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        isMovingRight = true;
    } else {
        isStanding = true;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        isJumping = true;
    }

    return 0;
}

void Player::render(sf::RenderWindow& gamewindow) {
    gamewindow.draw(sprite);
}

void Player::update(float dt) {
    stateText = "";

    if(isJumping) {
        jump(dt);
    }
    if(isMovingLeft) {
        moveLeft(dt);
    } else if(isMovingRight) {
        moveRight(dt);
    } else {
        stateText += "Standing";
    }

    if(position.x < 5.f)
        position.x = 5.f;
    if(position.x > WINDOW_WIDTH - 5.f)
        position.x = WINDOW_WIDTH - 5.f;
    if(position.y > (WINDOW_HEIGHT - 32.f))
        position.y = WINDOW_HEIGHT - 32.f;
    sprite.setPosition(position);

    isStanding = false;
    isMovingLeft = false;
    isMovingRight = false;
}

void Player::moveLeft(float dt) {
    stateText += "Left";
    position.x -= (velocity.x * dt);
    velocity.x  += pow(position.x * dt, 1.5);
    if(velocity.x > maxSpeed)
        velocity.x = maxSpeed;
}

void Player::moveRight(float dt) {
    stateText += "Right";
    position.x += (velocity.x * dt);
    velocity.x  += pow(position.x * dt, 1.5);
    if(velocity.x > maxSpeed)
        velocity.x = maxSpeed;
}

void Player::jump(float dt) {
    stateText += "Jump";
    float jumpSpeed = 5.f;

    if(!isAtVerticalPeak) {
        velocity.y -= pow(jumpSpeed, 2.3);
        if(position.y < (WINDOW_HEIGHT - 32.f) - 20.f) {
            isAtVerticalPeak = true;
            position.y = (WINDOW_HEIGHT - 32.f) - 20.f;
        }
    } else {
        velocity.y += pow(jumpSpeed, 2.3);
        if(position.y >= (WINDOW_HEIGHT - 32.f)){
            isAtVerticalPeak = false;
            isJumping = false;
            velocity.y = 0.f;
        }
    }

    if(isMovingLeft)
        position.x -= (velocity.x * dt);
    if(isMovingRight)
        position.x += (velocity.x * dt);
    position.y += (velocity.y * dt);
}
