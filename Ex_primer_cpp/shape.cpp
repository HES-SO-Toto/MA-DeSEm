#include "shape.h"
#include <iostream>

using namespace std;
string colorStr[] = {"red","blue","green","yellow","purple"};

shape::shape(point p1, point p2,color c)
{
    _p1 = p1;
    _p2 = p2;
    _color = c;
    _area = 0.;
    _perimeter = 0.;
}

color shape::getColor()
{
    return _color;
}
string shape::getColorStr()
{
    return colorStr[_color];
}


void shape::setColor(color c)
{
    _color = c;
}

void shape::setP1(point p1)
{
    _p1 = p1;
}
void shape::setP2(point p2)
{
    _p2 = p2;
}

point shape::getP1()
{
    return _p1;
}
point shape::getP2()
{
    return _p2;
}

float shape::getArea(){return _area;}
float shape::getPerimetre(){return _perimeter;}

void shape::printInfo()
{
    cout << "la forme n'est pas définie" << endl;
}
