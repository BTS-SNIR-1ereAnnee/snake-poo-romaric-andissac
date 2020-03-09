#ifndef SNAKE_H
#define SNAKE_H

#include <ncurses.h>
#include "Point.h"

class Point;
class Snake
{
public:
    Snake(); //constructeur
    ~Snake(); //desctructeur
    
    void ajouterPoint(Point p);     //fonction ajouterPoint
    void afficher();                //fonction afficher le point
    
    

private:
    Point m_serpent[20];        //methode tableau serpent    
    int m_indexSerpent;         //methode index serpent
    
};
#endif
