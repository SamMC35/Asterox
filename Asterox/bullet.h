#ifndef BULLET_H
#define BULLET_H

#include <dream.h>

class Bullet
{
private:
    Vector2 pos;

public:
    Vector2 returnPos();        //Return Pos
    
    void logic();               //Logic
    void draw();                //Draw
};

#endif