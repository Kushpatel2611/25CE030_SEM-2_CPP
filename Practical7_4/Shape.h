#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual float Area() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w);
    float Area();
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r);
    float Area();
};

#endif