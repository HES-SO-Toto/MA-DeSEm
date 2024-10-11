#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class rectangle : public shape
{
public:
    rectangle(point p1, point p2, color c);
    void printInfo();
private:
    void computeArea();
    void computePerimeter();
};

#endif // RECTANGLE_H
