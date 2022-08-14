#include <dream.h>
#include "game.h"

Game::Game()
{
    game_state = 0;
}

bool Game::menu()
{
    //Write the text of menu

    if(CheckKeyPress(SDL_SCANCODE_SPACE))
        game_state = 1;
}


bool Game::run()
{

    // 0 is for menu
    // 1 is for loading the assets
    // 2 is for logic and draw

    switch(game_state)
    {
        case 0:
            menu();
            break;
        case 1:
            load();
            break;
        case 2:
            logic();
            draw();
            break;
    }
}