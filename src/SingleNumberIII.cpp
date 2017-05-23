/*
 * SingleNumberIII.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: rafael
 */

#include "SingleNumberIII.h"

vector<int> SingleNumberIII::singleNumber(vector<int> &nums) {
	int n = 0;

	for (auto num : nums) {
		n ^= num;
	}

	n &= -n;

	vector<int> result = {0, 0};

	for (auto num : nums) {
		if ((num & n) == 0) {
			result[0] ^= num;
		} else {
			result[1] ^= num;
		}
	}

	return result;
}

void SingleNumberIII::run() {
	vector<int> list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(1);
	list.push_back(3);
	list.push_back(2);
	list.push_back(5);

	vector<int> result = singleNumber(list);
	cout << "The single numbers are: " << result[0];
	cout << " and " << result[1] << endl;
}

static Leetcode *singleNumberIII = new SingleNumberIII();
