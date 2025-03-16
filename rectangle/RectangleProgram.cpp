#include <iostream>
#include "Rectangle.h"

int main() {
    double length, width;

    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;

    Rectangle rect(length, width);

    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;
    std::cout << "Perimeter of the rectangle: " << rect.calculatePerimeter() << std::endl;

    return 0;
}
