#include <iostream>
#include "BaseDerived.h"
using namespace std;

Base::~Base() {
    cout << "Base Destructor Called\n";
}

Derived::Derived() {
    data = new int[5];
    cout << "Memory Allocated in Derived\n";
}

Derived::~Derived() {
    delete[] data;
    cout << "Derived Destructor Called (Memory Freed)\n";
}