/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include <ncurses.h>
#include "Snake.h"


using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();


    /**Point p(10,4);
    p.drawPoint();
    Point p2(10,5);
    p2.drawPoint();
    
    //test deplacement serpent
    
    p2.setX(6);
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
    
    //affiche un point
    Snake serpent;      
    Point psd(10,4);
    //psd.drawPoint();
    serpent.ajouterPoint( psd );
    serpent.afficher();
    
    
    /**Point psd2(10,5);
    serpent.ajouterPoint( psd2 );
    serpent.afficher();
    
    Point psd3(10,6);
    serpent.ajouterPoint( psd3 );
    serpent.afficher();
    
    Point psd4(10,7);
    serpent.ajouterPoint( psd4 );
    serpent.afficher();
    **/
    
    //deplacement serpent
    psd.moveLeft();  
    psd.drawPoint();
    
    //cout << "press any key to quit" << endl;
    
    getchar();
    fenetre->kill();
    return 0;
}
