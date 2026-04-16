#include "Shape.h"

Shape::Shape(double r) : radius(r) {}

double Shape::getRadius() const {
    return radius;
}

Circle::Circle(double r) : Shape(r) {}

double Circle::calculateArea() const {
    return 3.14 * radius * radius;
}