
#include "objects/Background.hpp"
#include <iostream>

void Background::setGameObject(const std::string texturepath) {
    setTexture(texturepath);
    texture.setRepeated(true);

    float twidth = texture.getSize().x;
    float theight = texture.getSize().y;

    setSprite();
    sprite.setTextureRect(sf::IntRect(0, 0, twidth * 4.f, theight));
}
