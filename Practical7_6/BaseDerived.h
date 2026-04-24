#ifndef BASEDERIVED_H
#define BASEDERIVED_H

class Base {
public:
    virtual ~Base();
};

class Derived : public Base {
private:
    int* data;
public:
    Derived();
    ~Derived();
};

#endif