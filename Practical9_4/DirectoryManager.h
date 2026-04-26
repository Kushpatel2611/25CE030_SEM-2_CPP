#ifndef DIRECTORYMANAGER_H
#define DIRECTORYMANAGER_H

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class DirectoryManager {
private:
    map<string, vector<string>> directory;

public:
    void addFolder();
    void addFile();
    void displayDirectory();
    void showMenu();
};

#endif