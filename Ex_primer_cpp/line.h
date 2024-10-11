#ifndef LINE_H
#define LINE_H
#include "shape.h"

class line : public shape
{
public:
    line(point p1, point p2, color c);
    void printInfo();
protected:
    void computelenght();
};

#endif // LINE_H
