/*
 * SingleNumberII.h
 *
 *  Created on: Oct 31, 2016
 *      Author: rafael
 */

#ifndef SRC_SINGLENUMBERII_H_
#define SRC_SINGLENUMBERII_H_

#include "Leetcode.h"

#include <vector>
#include <iostream>

using namespace std;

class SingleNumberII: public Leetcode {
public:
	int singleNumber(vector<int> &nums);

	virtual void run() final;
};

#endif /* SRC_SINGLENUMBERII_H_ */
