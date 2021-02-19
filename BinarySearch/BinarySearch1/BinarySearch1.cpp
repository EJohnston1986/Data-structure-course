// BinarySearch1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* A binary search requires that a list be in a sorted order
   To search for a particular "key" value in a list we need to 3 variable

   1) lower = index 0 (at start)
   2) higher = last index (9 at start)
   3) mid = (low + high) /2

   Therefore mid = (0 + 9) / 2 = 4.5 or  index 5

   Now we compare our key or search value with the value of mid and ask ourselves is
   our key is smaller or greater than the value stored at the mid index.

   if value LOWER than mid:
        high changes to mid -1 (4)
        low stays the same (0)

        mid = (4 + 0) /2 = 2

   if  value HIGHER than mid
        low changes to mid + 1
        high stays the same

        mid = (6 + 9) /2 = 7.5 (8)

    Repeat until the value matches.

    if low index equals the high and no match then element is not in the list
*/

#include <iostream>

// function that implements a binary search on a sorted array
int binSearch(int key, int array[], int sizeOfArray) {
    int low = 0;
    int high = 9;  
    int mid{};

    while (low <= high) {
        mid = (low + high) / 2;

        if (key == array[mid]) {
            return mid;
        } else if (key < array[mid]) {
            high = mid - 1;
        } else if (key > array[mid]) {
            low = mid + 1;

        } 
    }

    return -1;
}

int main() {

    int key{};

    // creating an array that is sorted
    int array[10] = {0,3,12,33,74,105,166,273,388,409};       

    std::cout << "Please enter a key value to search in the array" << std::endl;
    std::cin >> key;

    int indexFound = binSearch(key,array,10);

    if (indexFound != -1) {
        std::cout << "element " << key << " found at index " << indexFound << std::endl;
    } else {
        std::cout << "element not found un array" << std::endl;
    }
    
    return 0;
}

