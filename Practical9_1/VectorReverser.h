#ifndef VECTORREVERSER_H
#define VECTORREVERSER_H

#include <vector>

using namespace std;

class VectorReverser {
public:
    void run();
private:
    void manualReverse(vector<int>& vec);
    void display(const vector<int>& vec);
};

#endif