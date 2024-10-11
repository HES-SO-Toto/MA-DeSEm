#include "circle.h"
#include <iostream>
#include <cmath>


using namespace std ;

circle::circle(point p1, point p2, color c):shape(p1,p2,c)
{
    this->computeArea();
    this->computePerimeter();
}

void circle::computeArea()
{
    point p1 = getP1();
    point p2 = getP2();
    int delta_x = p1.get_x()-p2.get_x();
    int delta_y = p1.get_y()-p2.get_y();
    float radius = 0;
    if(delta_x>delta_y)
        radius = delta_y;
    else
        radius = delta_x;
    _area = std::abs(pow(radius,2)*PI);
}

void circle::computePerimeter()
{
    point p1 = getP1();
    point p2 = getP2();
    int delta_x = p1.get_x()-p2.get_x();
    int delta_y = p1.get_y()-p2.get_y();
    float radius = 0;
    if(delta_x>delta_y)
        radius = delta_y;
    else
        radius = delta_x;
    _perimeter = std::abs(2*radius*PI);

}

void circle::printInfo()
{
    cout << "la forme est un cercle " << this->getColorStr() << " dont la suface est de " << this->getArea() << " et le perimetre de " << this->getPerimetre() << endl ;
}
