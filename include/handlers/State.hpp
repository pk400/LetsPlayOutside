
#ifndef STATE_HPP
#define STATE_HPP

class State {
public:
    virtual void update() = 0;
    virtual void render() = 0;
};

#endif /* STATE_HPP */
