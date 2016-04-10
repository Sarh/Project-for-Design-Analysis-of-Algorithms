/*
 * utils.hpp
 *
 *  Created on: Apr 4, 2016
 *      Author: sarah
 */

#ifndef UTILS_HPP_
#define UTILS_HPP_
#include <vector>
#include <string>

const int MAX_RANGE = 10000;

// Vector Utils
void vectorSwap(std::vector<int> &A, int i, int j);
std::vector<int> orderVector(int n);
std::vector<int> randOrderVector(int n);
void loopVec(std::vector<int> &A);

// General Utils
int readInt(std::string prompt);
void writeVect(std::vector<int> &A);
void writeVect(std::vector<int> &A, double time);





#endif /* UTILS_HPP_ */
