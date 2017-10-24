/*
 * SingleNumber.cpp
 *
 *  Created on: Oct 22, 2016
 *      Author: rafael
 */

#include "SingleNumberI.h"

int SingleNumberI::singleNumber(vector<int> &nums) {
    int n = 0;

	for (auto num : nums) {
		n ^= num;
	}

	return n;
}

void SingleNumberI::run() {

}

// static Leetcode *lc = new SingleNumberI();
