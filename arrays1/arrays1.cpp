// arrays1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// for creation of a dynamic array
struct Array {
	int* A{nullptr}; // pointer to point to first element of dynamic array
	int size{};      // max num elements in array
	int length{};    // num elements
};

// displays elements of array
void displayElements(Array &array1) {
	std::cout << "displaying elements in array: " << std::endl;

	for (int i = 0; i < array1.length; i++) {
		std::cout << array1.A[i] << std::endl;
	}
}

// adding element to end of array (if not at max capacity)
void append(Array &array1) {
	if (array1.length < array1.size) {
		
		int n{};           // variable to store number to add to array
		array1.length++;   // increment length of array

		std::cout << "what number would you like to add to the array?" << std::endl;
		std::cin >> n;
		array1.A[array1.length - 1] = n;

		displayElements(array1);
	} else {
		std::cout << "array is full" << std::endl;
	}
}

void insert(Array &array1) {
	int index{};
	int number{};

	std::cout << "at which index would you like to insert a number?" << std::endl;
	std::cin >> index;
	if (index >= 0 && index <= array1.length) {		

		// shift elements one to the right until index that insertion occurs.
		for (int i = array1.length; i > index; i--) {
			array1.A[i] = array1.A[i - 1];
		}
		array1.length++; // increment length
		std::cout << "Which number would you like to indert at this index?" << std::endl;
		std::cin >> number;

		array1.A[index] = number;
		std::cout << "The number that appears at index: " << index << " is " << array1.A[index];
		
		displayElements(array1);
	}
	else {
		std::cout << "Cannot add element into array, is full" << std::endl;
	}
}

void deleteElement(Array &array1) {
	int del{};
	std::cout << "Select an index between 0 and " << array1.length - 1 << " to delete" << std::endl;
	std::cin >> del;

	for (int i = del; i < array1.length - 1; i++) {
		array1.A[i] = array1.A[i + 1];
	}
	array1.length--;
	displayElements(array1);
}

int main() {	

	// create an array from the struct
	struct Array array1;	

	// ask user to decide the max size of the array
	std::cout << "What  max size would you like your array to be?" << std::endl;
	std::cin >> array1.size;

	// assigning the size chosen by the user to the dynamic array
	array1.A = new int[array1.size];

	//Please select a number of elements for the array
	std::cout << "Please select the number of elements to add to the array" << std::endl;
	std::cin >> array1.length;	

	// use for loop to ask user to enter the numbers they want to enter into the array
	for (int i = 0; i < array1.length; i++) {
		std::cout << "enter element number" << i + 1 << std::endl;
		std::cin >> array1.A[i];
	}

	displayElements(array1);
	append(array1);
	insert(array1);

	return 0;
}


