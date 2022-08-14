#ifndef ROCK_H
#define ROCK_H

#include <dream.h>

class Rock
{
private:
    Vector2 pos;
    double angle;

public:
    Vector2 returnPos();

    void logic();
    void draw();
};

#endif