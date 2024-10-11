#ifndef SHAPE_H
#define SHAPE_H
#include "point.h"
#include <iostream>

using namespace std;

enum color
{
    red,blue,green,yellow,purple
};

class shape
{
public:
    shape(point p1, point p2,color c);

    color getColor();
    string getColorStr();
    void setColor(color c);
    void setP1(point p1);
    void setP2(point p2);
    point getP1();
    point getP2();
    float getArea();
    float getPerimetre();
    void printInfo();
protected :
    point _p1;
    point _p2;
    float _area;
    float _perimeter;
    color _color;

};

#endif // SHAPE_H
