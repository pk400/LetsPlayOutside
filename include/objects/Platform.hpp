
#ifndef PLATFORM_HPP
#define PLATFORM_HPP

#include "GameObject.hpp"

class Platform : public GameObject {
public:
    Platform() {}
    void setGameObject(const std::string texturepath);
private:

};

#endif // PLATFORM_HPP
