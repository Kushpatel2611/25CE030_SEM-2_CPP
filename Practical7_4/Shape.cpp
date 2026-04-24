#include "Shape.h"
#define PI 3.14

Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

float Rectangle::Area() {
    return length * width;
}

Circle::Circle(float r) {
    radius = r;
}

float Circle::Area() {
    return PI * radius * radius;
}