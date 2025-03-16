#include "Circle.h"
#include <cmath>

Circle::Circle() : x(0), y(0), radius(1) {}

Circle::Circle(double xValue, double yValue, double r) : x(xValue), y(yValue), radius(r) {}

void Circle::setRadius(double r) {
    if (r > 0)
        radius = r;
}

void Circle::setX(double value) {
    x = value;
}

void Circle::setY(double value) {
    y = value;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getX() const {
    return x;
}

double Circle::getY() const {
    return y;
}

double Circle::getArea() const {
    return 3.14 * radius * radius;
}

bool Circle::containsPoint(double xValue, double yValue) const {
    double distance = sqrt(pow(xValue - x, 2) + pow(yValue - y, 2));
    return distance <= radius;
}
