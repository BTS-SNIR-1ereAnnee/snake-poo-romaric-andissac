#ifndef POINT_H
#define POINT_H


class Point
{
public:
    /** Default constructor */
    Point();
    /** Constructeur */
    Point(int x, int y);

    /** Default destructor */
    virtual ~Point();
    /**
        Move point up
    */
    void moveUp();
    /**
        Move point down
    */
    void moveDown();
    /**
        Move point left
    */
    void moveLeft();
    /**
        Move point up
    */
    void moveRight();

    /** Access m_x
     * \return The current value of m_x
     */
    int GetX();
    /** Set m_x
     * \param val New value to set
     */
    void SetX(int val);
    /** Access m_y
     * \return The current value of m_y
     */
    int GetY();
    /** Set m_y
     * \param val New value to set
     */
    void SetY(int val);

    /**
    *   dessine le point
    */
    void drawPoint();
    /**
    *   efface le point
    */
    void erasePoint();
    /**
    *   Affiche les coordonnées
    */
    void debug();
protected:

private:
    int m_x; //!< Member variable "m_x"
    int m_y; //!< Member variable "m_y"
};

#endif // POINT_H
