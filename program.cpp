/*
 * program.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: sarah
 */

#include "qS.hpp"
#include "utils.hpp"
#include <iostream>
#include <vector>


using namespace std;

int main(){
 vector<int> A;
 int n, choice = 0;

// Menu, general operations: ask user for N, based on menu option create A as decreasing Order or random number vector of n elements, sort by what was chosen in menu.
do {
	cout << "Menu" << endl << "\t 1. QuickSort, Ordered" << endl << "\t 2. QuickSort, Random Numbers " << endl << "\t 3. Randomized QuickSort, Ordered" << endl << "\t 4. Randomized QuickSort, Random Numbers" << endl << "\t 5. Exit" << endl;
	choice = readInt("Please enter your choice: ");
	switch(choice){
	case 1: n = readInt("Please enter N as an integer: "); A = orderVector(n); quickSort(A, 0, A.size()-1); loopVec(A); break;
	case 2: n = readInt("Please enter N as an integer: "); A = randOrderVector(n); quickSort(A, 0, A.size()-1); loopVec(A); break;
	case 3: n = readInt("Please enter N as an integer: "); A = orderVector(n); randomQS(A, 0, A.size()-1); loopVec(A); break;
	case 4: n = readInt("Please enter N as an integer: "); A = randOrderVector(n); randomQS(A, 0, A.size()-1); loopVec(A); break;
	default: break;
	}
	cout << endl;
} while (choice != 5);


	return 0;
}


