#include "DirectoryManager.h"

using namespace std;

void DirectoryManager::addFolder() {
    string folderName;
    cout << "Enter folder name to create: ";
    cin >> folderName;

    if (directory.find(folderName) == directory.end()) {
        directory[folderName] = vector<string>();
        cout << "Folder '" << folderName << "' created." << endl;
    } else {
        cout << "Folder already exists!" << endl;
    }
}

void DirectoryManager::addFile() {
    string folderName, fileName;
    cout << "Enter folder name to add file to: ";
    cin >> folderName;

    if (directory.find(folderName) != directory.end()) {
        cout << "Enter file name: ";
        cin >> fileName;
        directory[folderName].push_back(fileName);
        cout << "File '" << fileName << "' added to '" << folderName << "'." << endl;
    } else {
        cout << "Folder not found! Create the folder first." << endl;
    }
}

void DirectoryManager::displayDirectory() {
    if (directory.empty()) {
        cout << "\nDirectory is empty." << endl;
        return;
    }

    cout << "\n--- Directory Structure (Sorted) ---" << endl;
    for (map<string, vector<string>>::iterator it = directory.begin(); it != directory.end(); ++it) {
        cout << "[" << it->first << "]" << endl;
        
        if (it->second.empty()) {
            cout << "  (Empty Folder)" << endl;
        } else {
            for (const string& file : it->second) {
                cout << "  |-- " << file << endl;
            }
        }
    }
    cout << "------------------------------------" << endl;
}

void DirectoryManager::showMenu() {
    int choice;
    do {
        cout << "\n1. Add Folder\n2. Add File\n3. Display All\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: addFolder(); break;
            case 2: addFile(); break;
            case 3: displayDirectory(); break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
}