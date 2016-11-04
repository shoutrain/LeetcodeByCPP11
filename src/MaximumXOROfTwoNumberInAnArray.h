/*
 * MaximumXOROfTwoNumberInAnArray.h
 *
 *  Created on: Nov 4, 2016
 *      Author: rafael
 */

#ifndef MAXIMUMXOROFTWONUMBERINANARRAY_H_
#define MAXIMUMXOROFTWONUMBERINANARRAY_H_

#include "Leetcode.h"

#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

class MaximumXOROfTwoNumberInAnArray: public Leetcode {
public:
	int findMaximumXOR(vector<int> &nums);

	virtual void run() final;
};

#endif /* MAXIMUMXOROFTWONUMBERINANARRAY_H_ */
