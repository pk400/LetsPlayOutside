
#ifndef GAMESTATEHANDLER_HPP
#define GAMESTATEHANDLER_HPP

#include <SFML/Graphics.hpp>
#include <stack>

#include "State.hpp"

/*
 * The game consists of different game states than change throughout the life
 * of the game. Menustate, Playstate, Pausestate, for example. The
 * GameStateHandler manages all those states and the main Game class only knows
 * about the top-most state.
 */
class GameStateHandler {
public:
    GameStateHandler();
    int handleInput();
    void update(float deltatime);
    void render(sf::RenderWindow& gamewindow);
    int getNumStates() { return gamestates.size(); }
private:
    std::stack<State*> gamestates;
};

#endif /* GAMESTATEHANDLER_HPP */
