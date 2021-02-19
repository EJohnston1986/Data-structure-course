// ArrayOperations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// get an index from the array
int getIndex(int array[],int size) {
    int index{};
    std::cout << "Please select a valid index for the array" << std::endl;
    std::cin >> index;

    if (index >= 0 && index <= size - 1) {
        return array[index];
    return -1;   
}

void setIndex(int array[], int size) {
    int index{};
    std::cout << "Please select a valid index for the array" << std::endl;
    std::cin >> index;

    if (index >= 0 && index <= size - 1) {
}

// have to check all values in unsorted list to find max
int max(int arrayUnsorted[],int size) {
    int maxValue = arrayUnsorted[0];

    for (int i = 1; i < size; i++) {
        if (arrayUnsorted[i] > maxValue) {
            maxValue = arrayUnsorted[i];
        }
    }
    return maxValue;
}

// have to check all values in unsorted list to find min
int min(int arrayUnsorted[], int size) {
    int minValue = arrayUnsorted[0];

    for (int i = 1; i < size; i++) {
        if (arrayUnsorted[i] < minValue) {
            minValue = arrayUnsorted[i];
        }
    }
    return minValue;
}

// sum all values in the array
int sum(int array[], int size) {
    int sumOfArr{};

    for (int i = 0; i < size; i++) {
        sumOfArr = sumOfArr + array[i];
    }
    return sumOfArr;
}



int main() {
    
    int arraySize{ 15 }; 

    //sorted list
    int arraySorted[15]{ 4,8,10,15,18,21,24,27,29,33,34,37,39,41,43 };

    //unsorted list
    int arrayUnsorted[15]{ 43,4,41,8,39,10,15,37,18,34,21,33,24,29,27 };
    
    return 0;
}


