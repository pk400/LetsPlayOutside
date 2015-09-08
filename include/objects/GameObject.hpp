
#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include <SFML/Graphics.hpp>
#include <iostream>

class GameObject {
public:
    GameObject() {}
    void setTexture(const std::string texturepath) { texture.loadFromFile(texturepath); }
    void setSprite() { sprite.setTexture(texture); }

    void setScale(sf::Vector2f amount) { sprite.setScale(amount); }
    void setPosition(sf::Vector2f amount) { sprite.setPosition(amount); }

    sf::Sprite getSprite() { return sprite; }
protected:
    sf::Texture texture;
    sf::Sprite sprite;
};

#endif /* GAMEOBJECT_HPP */
