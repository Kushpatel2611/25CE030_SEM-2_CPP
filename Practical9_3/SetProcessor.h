#ifndef SETPROCESSOR_H
#define SETPROCESSOR_H

#include <set>
#include <vector>

using namespace std;

class SetProcessor {
public:
    void run();
private:
    void displaySet(const set<int>& s);
    void convertAndDisplayVector(const set<int>& s);
};

#endif