/*
 * SingleNumber.h
 *
 *  Created on: Oct 22, 2016
 *      Author: rafael
 */

#ifndef SRC_SINGLENUMBER_H_
#define SRC_SINGLENUMBER_H_

#include "Leetcode.h"

#include <vector>

using namespace std;

class SingleNumberI: public Leetcode {
public:
	int singleNumber(vector<int> &nums);

	virtual void run() final;
};

#endif /* SRC_SINGLENUMBER_H_ */
