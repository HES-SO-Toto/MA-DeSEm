#include <iostream>

using namespace std;

#include "line.h"
#include "rectangle.h"
#include "circle.h"
int main()
{
    line l1(point(10,10),point(40,40),color::blue);
    rectangle r1(point(10,50),point(40,90),color::purple);
    circle c1(point(10,90),point(40,140),color::yellow);

    cout << r1.getP1().get_x() << endl;
    l1.printInfo();
    r1.printInfo();
    c1.printInfo();

    return 0;
}
