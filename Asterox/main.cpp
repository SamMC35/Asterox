#include <dream.h>
#include "game.h"

int main()
{
    CreateWindow("Asterox", 800, 600, false);

    Game game;      //Main game object

    //Main game 
    while(!done())
    {
        ClearScreen();
        game.run();
        Render(60);
    }

    CloseWindow();
}