/*
 * qS.hpp
 *
 *  Created on: Apr 4, 2016
 *      Author: sarah
 */

#ifndef QS_HPP_
#define QS_HPP_

#include <vector>

// Quick Sort declarations
void quickSort(std::vector<int>& A, int p, int r);
int partition(std::vector<int>& A, int p, int r);


// Randomized Quick Sort declarations
void randomQS(std::vector<int>& A, int p, int r);
int randomPart(std::vector<int> &A, int p, int r);





#endif /* QS_HPP_ */
