#include <iostream>
#include <string>
#include "WordFrequency.h"

using namespace std;

int main() {
    WordFrequency wf;
    string text, segment = "";
    
    cout << "Enter a paragraph: ";
    getline(cin, text);

    for (int i = 0; i <= text.length(); i++) {
        // Break at space or end of string
        if (isspace(text[i]) || text[i] == '\0') {
            if (segment != "") {
                wf.addWord(segment);
                segment = ""; 
            }
        } else {
            segment += text[i];
        }
    }

    wf.print();
    
    return 0;
}