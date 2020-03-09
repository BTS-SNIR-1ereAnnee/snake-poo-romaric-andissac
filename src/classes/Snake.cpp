#include "Point.h"
#include "Board.h"
#include <iostream>
#include <ncurses.h>
#include "Snake.h"

using namespace std;

//initialiser l'attribut
Snake::Snake()
{
    this->m_indexSerpent = 0;
}


//fonction afiche les point 
void Snake::afficher()
{
    for(int i=0;i<20;i++)
         {
            m_serpent[i].drawPoint();   
         }
}

//fonction ajouter point

void Snake::ajouterPoint(Point p)
{
    this->m_serpent[m_indexSerpent] = p;
}

Snake::~Snake()
{

}


