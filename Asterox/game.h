#ifndef GAME_H
#define GAME_H

class Game
{

private:

    int game_state;         //Game state

public:

    bool run();             //Run game
    bool menu();            //Menu of the game
    bool load();            //Load the game
    bool logic();           //Logic of the game
    bool draw();            //Draw the game
};

#endif