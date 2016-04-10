/*
 * qS.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: sarah
 */

#include "qS.hpp"
#include "utils.hpp"
#include <stdlib.h>
#include <time.h>

// Quick Sort definitions

// QuickSort, sorts a vector of ints in increasing order
void quickSort(std::vector<int>& A, int p, int r){
	int q;
	if(p < r){
		q = partition(A, p, r);
		quickSort(A, p, q-1);
		quickSort(A, q+1, r);

	}



}
// Partition, called in QuickSort & randomPart. Determines the new partition.
int partition(std::vector<int> &A, int p, int r){
	int x = A.at(r);
	int i = p-1;

	for(int j = p; j < r; j++){
		if(A.at(j) <= x){
			i++;
			vectorSwap(A, i, j);
			}
	}
	vectorSwap(A, i+1, r);
	return i+1;
}


// Randomized Quick Sort definitions

//Randomized QuickSort, similar to QuickSort but chooses a random pivot, sorts in increasing order
void randomQS(std::vector<int>& A, int p, int r){
	if (p < r) {
		int q = randomPart(A, p, r);
		randomQS(A, p, q-1);
		randomQS(A, q+1, r);

	}
}

// Calls Partition to do the heavy work, Random Partition really just generates a random number with the range of 0 to size of Vector-1 to randomly choose the pivot element. Increases sorting speed when vector is sorted in decreasing order.
int randomPart(std::vector<int> &A, int p, int r){
	srand (time(NULL));

	int i = rand() % (r-p + 1) + p;
	vectorSwap(A, r, i);

	return partition(A, p, r);

}



