#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    Circle c1(2.0, 3.0, 2.0);
    cout << "Circle at (" << c1.getX() << ", " << c1.getY() << ") with radius " << c1.getRadius() << endl;
    cout << "Area: " << c1.getArea() << endl;
    cout << "Contains (2.0, 4.0)? " << (c1.containsPoint(2.0, 4.0) ? "Yes" : "No") << endl;
    cout << "Contains (2.0, 10.0)? " << (c1.containsPoint(2.0, 10.0) ? "Yes" : "No") << endl;

    Circle* cPtr = &c1;
    cPtr->setX(7.0);
    cPtr->setY(5.0);
    cPtr->setRadius(3.0);

    cout << "Updated Circle at (" << cPtr->getX() << ", " << cPtr->getY() << ") with radius " << cPtr->getRadius() << endl;
    cout << "Contains (6.0, 5.0)? " << (cPtr->containsPoint(6.0, 5.0) ? "Yes" : "No") << endl;
    cout << "Contains (10.0, 10.0)? " << (cPtr->containsPoint(10.0, 10.0) ? "Yes" : "No") << endl;

    return 0;
}
