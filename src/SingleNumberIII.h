/*
 * SingleNumberIII.h
 *
 *  Created on: Nov 2, 2016
 *      Author: rafael
 */

#ifndef SINGLENUMBERIII_H_
#define SINGLENUMBERIII_H_

#include "Leetcode.h"

#include <vector>
#include <iostream>

using namespace std;

class SingleNumberIII: public Leetcode {
public:
	vector<int> singleNumber(vector<int> &nums);

	virtual void run() final;
};

#endif /* SINGLENUMBERIII_H_ */
