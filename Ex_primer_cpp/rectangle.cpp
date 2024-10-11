#include "rectangle.h"
#include <iostream>

using namespace std ;
rectangle::rectangle(point p1, point p2, color c):shape(p1,p2,c)
{
    this->computeArea();
    this->computePerimeter();
}

void rectangle::computeArea()
{
    point p1 = getP1();
    point p2 = getP2();
    int delta_x = p1.get_x()-p2.get_x();
    int delta_y = p1.get_y()-p2.get_y();
    _area = std::abs(delta_x*delta_y);
}

void rectangle::computePerimeter()
{
    point p1 = getP1();
    point p2 = getP2();
    int delta_x = p1.get_x()-p2.get_x();
    int delta_y = p1.get_y()-p2.get_y();
    _perimeter = std::abs(2*delta_x)+std::abs(2*delta_y);

}

void rectangle::printInfo()
{
    cout << "la forme est un rectangle " << this->getColorStr() << " dont la suface est de " << this->getArea() << " et le perimetre de " << this->getPerimetre() << endl ;
}

