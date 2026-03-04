#ifndef RECTANGLES_H
#define RECTANGLES_H

class Rectangles 
{
private:
    int plotid;
    float length;
    float breadth;

public:
    Rectangles() : plotid(-1), length(0), breadth(0) {}

    void setplotid(int pid);
    void setlength(float l);
    void setbreadth(float b);

    int getplotid();

    int viewdetails(int tempid);
    int updatedimensions(int tempid);
};

#endif

