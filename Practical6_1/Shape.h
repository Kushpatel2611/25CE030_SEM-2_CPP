#ifndef SHAPE_H
#define SHAPE_H

class Shape {
protected:
    double radius;
public:
    Shape(double r = 0);
    double getRadius() const;
};

class Circle : public Shape {
public:
    Circle(double r = 0);
    double calculateArea() const;
};

#endif