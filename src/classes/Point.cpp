#include "Point.h"
#include "window.h"



Point::Point()
{
    m_x = m_y = 10;
}
Point::Point(int x, int y)
{
    this->m_x = x;
    this->m_y = y;
}

Point::setPoint(int x, int y)
{
    this->m_x = x;
    this->m_y = y;
}

void Point::moveDown()
{
    y--;
}

void Point::moveUp()
{
    y++;
}

void Point::moveRight()
{
    x++;
}
void Point::moveLeft()
{
    x--;
}


int GetX()
{
    return m_x;
}

void SetX(int val)
{
    m_x = val;
}

int GetY()
{
    return m_y;
}

void SetY(int val)
{
    m_y = val;
}


void drawPoint()
{
    gotoxy(this->m_x, this->m_y);
    cout << "*";
}

void erasePoint()
{
    gotoxy(this->m_x, this->m_y);
    cout << " ";// l'étoile est remplacée par un espace
}

void debug()
{
    cout << "(" << this->m_x << "," << this->m_y << ")";
}
Point::~Point()
{
    //dtor
}
