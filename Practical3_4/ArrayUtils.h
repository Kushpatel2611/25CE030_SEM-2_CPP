#ifndef ARRAYUTILS_H
#define ARRAYUTILS_H

#include <iostream>
#include <algorithm>

template <typename T>
void display(T arr[], int size) {
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
}

template <typename T>
T findMax(T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; i++) 
        if (arr[i] > maxVal) maxVal = arr[i];
    return maxVal;
}

template <typename T>
void reverseArray(T arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        std::swap(arr[start++], arr[end--]);
    }
}

template <typename T>
void printLeaders(T arr[], int size) {
    T maxFromRight = arr[size - 1];
    std::cout << maxFromRight << " "; 

    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            std::cout << maxFromRight << " ";
        }
    }
    std::cout << std::endl;
}

#endif