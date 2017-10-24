/*
 * SingleNumberII.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: rafael
 */

#include "SingleNumberII.h"

int SingleNumberII::singleNumber(vector<int> &nums) {
	int result = 0;

	for (int i = 0; i < 32; i++) {
		int mark = 1 << i;
		int count = 0;

		for (int j = 0; j < nums.size(); j++) {
			if ((nums[j] & mark) != 0) {
				count++;
			}
		}

		result |= (count % 3) << i;
	}

	return result;
}

void SingleNumberII::run() {
	vector<int> list;

	list.push_back(2);
	list.push_back(2);
	list.push_back(3);
	list.push_back(2);

	cout << "The single number is: " << singleNumber(list) << endl;
}

// static Leetcode *lc = new SingleNumberII();
