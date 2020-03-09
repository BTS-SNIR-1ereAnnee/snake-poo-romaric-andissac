#include "Point.h"
#include "Board.h"
#include <iostream>
#include <ncurses.h>
#include "Snake.h"

using namespace std;

Snake::Snake()
{
    this->m_indexSerpent = 0;
}


//afiche les point 
void Snake::afficher()
{
    for(int i=0;i<20;i++)
         {
            m_serpent[i].debug();   
         }
}

void Snake::ajouterPoint(Point p)
{
    this->m_serpent[m_indexSerpent+1] = p;
}

Snake::~Snake()
{

}


