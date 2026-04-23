#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

class DynamicArray {
private:
    int* data;
    int size;
    int capacity;

public:
    DynamicArray();
    ~DynamicArray();

    void insert(int value);
    void deleteAt(int index);
    void display() const;
};

#endif