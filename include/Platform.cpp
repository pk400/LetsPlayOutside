
#include "objects/Platform.hpp"

void Platform::setGameObject(const std::string texturepath) {
    setTexture(texturepath);
    texture.setRepeated(true);

    float twidth = texture.getSize().x;
    float theight = texture.getSize().y;

    setSprite();
    sprite.setTextureRect(sf::IntRect(0, 0, twidth * 30.f, theight));
}
