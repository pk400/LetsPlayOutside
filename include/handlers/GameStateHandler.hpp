
#include <SFML/Graphics.hpp>
#include <stack>

#include "State.hpp"

class GameStateHandler {
public:
    GameStateHandler();
private:
    std::stack<State*> gamestates;
    int numstates_;
};
