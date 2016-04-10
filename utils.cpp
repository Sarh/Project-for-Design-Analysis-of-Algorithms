/*
 * utils.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: sarah
 */
//Utils
#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include "utils.hpp"

// Swap elements in a vector at A[i] and A[j]
void vectorSwap(std::vector<int> &A, int i, int j){
	int temp = A.at(j);
	A.at(j) = A.at(i);
	A.at(i) = temp;
}

//Create a vector that is sorted in decreasing order starting from N to 1, counting down by X

std::vector<int> orderVector(int n){

	std::vector<int> A;

	int x = readInt("Enter X, the amount to change by, as an integer: ");


	for(int i=0, j=n; j > 0; i++, j--){
		A.push_back(n-(i*x));

	}

	return A;
}

// Create a vector of size N consisting of random numbers <= MAX_RANGE
std::vector<int> randOrderVector(int n){
	std::vector<int> A;
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		A.push_back(rand() % MAX_RANGE +1);
	}

	return A;
}

// This is primarily a debugging tool that I used to loop over the vectors and output its elements.
void loopVec(std::vector<int> &A){
	for(int i=0; i < static_cast<int>(A.size()); i++){
		// enter whatever, I usually use this to print out for debugging/checking progress purposes
		std::cout << A.at(i) << std::endl;
	}
}

// Takes a string prompt as an argument, prompts user to enter an integer and changes that string number into an int. Returns int.
int readInt(std::string prompt){
	int x;
	std::string input;
	std::cout << prompt;
		std::cin >> input;
		x = atoi(input.c_str());

		return x;
}



