#include "Rectangle.h"

Rectangle::Rectangle(double len, double wid) : length(len), width(wid) {}

void Rectangle::setLength(double len) {
    length = len;
}

void Rectangle::setWidth(double wid) {
    width = wid;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::calculateArea() const {
    return length * width;
}

double Rectangle::calculatePerimeter() const {
    return 2 * (length + width);
}
