#include "Point.h"
#include "Board.h"
#include <iostream>
#include <ncurses.h>
#include "Snake.h"

using namespace std;

Snake::Snake()
{
    this->indexSerpent = 0;
}

void Snake::afficher()
{
    for(int i=0; i<indexSerpent; i++)
    {
        cout << '*';
    }
    cout << endl;
}

void Snake::ajouterPoint(Point p)
{
    this -> serpent[indexSerpent] = p;
    indexSerpent++;
}

Snake::~Snake()
{

}


