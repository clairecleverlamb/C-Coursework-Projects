
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid);

    void setLength(double len);
    void setWidth(double wid);
    double getLength() const;
    double getWidth() const;
    double calculateArea() const;
    double calculatePerimeter() const;
};

#endif
