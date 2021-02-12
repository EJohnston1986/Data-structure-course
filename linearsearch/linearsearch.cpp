// linearsearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void linearSearch() {

}

int main() {   
    bool success{};
    int number{};
    int array[10]{0,1,2,3,4,5,6,7,8,9};

    std::cout << "choose number to search from list" << std::endl;
    std::cin >> number;

    for (int i : array) {
        if (number == array[i]) {
            std::cout << "Match found at index: " << i << std::endl;
            success = true;
            break;
        } else {
            i++;
            success = false;
        }
    }

    

    
}

