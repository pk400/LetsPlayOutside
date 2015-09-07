
#ifndef BACKGROUND_HPP
#define BACKGROUND_HPP

#include <SFML/Graphics.hpp>

#include "GameObject.hpp"

class Background : public GameObject {
public:
    Background() {}
    void setGameObject(const std::string texturepath);
private:
};

#endif /* BACKGROUND_HPP */
