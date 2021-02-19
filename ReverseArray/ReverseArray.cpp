// ReverseArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Simple program to reverse the order of elements in an array
#include <iostream>

// reverse array function
void reverseArray(int array[], int size) {

	// displaying initial array
	std::cout << "The standard array:" << std::endl << std::endl;
		
	for(int i = 0; i < size; i++) {
		std::cout << "array element: " << i << " has value " << array[i] << std::endl;
	}

	// new array to store reversed data
	int arrayReversed[10]{};
	int j = 0;

	// populate reversed array
	for (int i = size-1; i > -1; i--) {
		arrayReversed[j] = array[i];
		j++;
	}

	// display reversed array
	std::cout << std::endl << "The reversed array is:" << std::endl << std::endl;

	for (int i = 0; i < size; i++) {		
		std::cout << "array element: " << i << " has value " << arrayReversed[i] << std::endl;
	}
}

int main() {

	int size{ 10 };
	int array[10]{ 0,1,2,3,4,5,6,7,8,9 };

	reverseArray(array, size);

	return 0;
}


