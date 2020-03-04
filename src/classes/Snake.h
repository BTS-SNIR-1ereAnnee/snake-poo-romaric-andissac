#ifndef SNAKE_H
#define SNAKE_H

#include <ncurses.h>
#include "Point.h"

class Snake
{
public:
    void ajouterPoint(Point p);
    void afficher();

private:
    Point serpent[20];
    
};
#endif
