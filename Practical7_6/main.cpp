#include "BaseDerived.h"

int main() {
    Base* ptr = new Derived();
    delete ptr;
    return 0;
}