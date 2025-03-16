#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    double getPerimeter() const;
    bool isSquare() const;
};

void Rectangle::setWidth(double w) {
    if (w > 0)
        width = w;
    else {
        cout << "ERROR: Invalid width!\n";
        exit(1);
    }
}

void Rectangle::setLength(double l) {
    if (l > 0)
        length = l;
    else {
        cout << "ERROR: Invalid length!\n";
        exit(1);
    }
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    return width * length;
}

double Rectangle::getPerimeter() const {
    return 2 * (width + length);
}

bool Rectangle::isSquare() const {
    return width == length;
}

int main() {
    Rectangle r;
    r.setWidth(4);
    r.setLength(4);

    cout << "Width: " << r.getWidth() << endl;
    cout << "Length: " << r.getLength() << endl;
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;
    cout << "Is Square: " << (r.isSquare() ? "Yes" : "No") << endl;

    return 0;
}

#endif
