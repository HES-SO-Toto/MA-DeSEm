#include "line.h"
#include <iostream>
#include <cmath>

using namespace std;

line::line(point p1, point p2, color c):shape(p1,p2,c)
{
    this->_area = 0;
    this->computelenght();
}

void line::computelenght()
{
    point p1 = getP1();
    point p2 = getP2();
    int delta_x = p1.get_x()-p2.get_x();
    int delta_y = p1.get_y()-p2.get_y();
    _perimeter = sqrt(std::pow(delta_x,2)+std::pow(delta_y,2));
}


void line::printInfo()
{
    cout << "la forme est une ligne " << this->getColorStr() << " et sa longeur est de " << this->getPerimetre() << endl ;
}

