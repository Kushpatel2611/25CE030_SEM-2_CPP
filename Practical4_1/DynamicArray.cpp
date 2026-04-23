#include "DynamicArray.h"
#include <iostream>

DynamicArray::DynamicArray() : data(nullptr), size(0), capacity(2) {
    data = new int[capacity];
}

DynamicArray::~DynamicArray() {
    delete[] data;
}

void DynamicArray::insert(int value) {
    if (size == capacity) {
        capacity *= 2;
        int* newData = new int[capacity];
        for (int i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }
    data[size++] = value;
}

void DynamicArray::deleteAt(int index) {
    if (index < 0 || index >= size) return;
    for (int i = index; i < size - 1; ++i) {
        data[i] = data[i + 1];
    }
    --size;
}

void DynamicArray::display() const {
    std::cout << "Array contents: ";
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << ' ';
    }
    std::cout << std::endl;
}