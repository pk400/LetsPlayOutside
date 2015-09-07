
#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <SFML/Graphics.hpp>

class Camera {
public:
    Camera(sf::Vector2f center_, sf::Vector2f dimensions_) {
        view.setCenter(center_);
        view.setSize(dimensions_);
    }
    sf::View getView() { return view; }
private:
    sf::View view;
};

#endif /* CAMERA_HPP */
