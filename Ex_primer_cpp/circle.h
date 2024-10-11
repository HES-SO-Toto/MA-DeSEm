#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

#define PI 3.1415
class circle : public shape
{
public:
    circle(point p1, point p2, color c);
    void printInfo();
private:
    void computeArea();
    void computePerimeter();
};

#endif // CIRCLE_H
