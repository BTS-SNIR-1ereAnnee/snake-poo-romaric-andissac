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
    for(int i=0; i<m_indexSerpent; i++)
    {
        cout << '*';
    }
    cout << endl;
}

void Snake::ajouterPoint(Point p)
{
    this -> m_serpent[m_indexSerpent] = p;
    this -> m_indexSerpent +1;
}

Snake::~Snake()
{

}


