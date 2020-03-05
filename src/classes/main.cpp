/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include <ncurses.h>


using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    Point p(10,4);
    p.drawPoint();
    Point p2(10,5);
    p2.drawPoint();
    
    /**p2.setX(6);
    p2.drawPoint();
    p2.setY(7);
    p2.drawPoint();
    p2.moveUp();
    p2.drawPoint();
    p2.moveDown();
    p2.drawPoint();
    p2.moveRight();
    p2.drawPoint();
    p2.moveLeft();
    p2.drawPoint();
    
    p.erasePoint();
    p2.moveDown();
    p2.drawPoint();
    **/
    
    
    
    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
    return 0;
}
