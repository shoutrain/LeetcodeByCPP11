/*
 * SingleNumber.cpp
 *
 *  Created on: Oct 22, 2016
 *      Author: rafael
 */

#include "SingleNumber.h"

int SingleNumber::singleNumber(vector<int> &nums) {
    int n = 0;

	for (auto num : nums) {
		n ^= num;
	}

	return n;
}

void SingleNumber::run() {

}

static Leetcode *lc = new SingleNumber();
