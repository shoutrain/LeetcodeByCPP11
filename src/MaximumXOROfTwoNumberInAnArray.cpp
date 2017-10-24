/*
 * MaximumXOROfTwoNumberInAnArray.cpp
 *
 *  Created on: Nov 4, 2016
 *      Author: rafael
 */

#include "MaximumXOROfTwoNumberInAnArray.h"

int MaximumXOROfTwoNumberInAnArray::findMaximumXOR(vector<int> &nums) {
	int max = 0;
	int mask = 0;
	unordered_set<int> t;

	for (int i = 31; i >= 0; i--) {
		mask |= (1 << i);
		t.clear();

		for (auto n : nums) {
			t.insert(mask & n);
		}

		int candidate = max | (1 << i);

		for (auto prefix : t) {
			if (t.find(prefix ^ candidate) != t.end()) {
				max = candidate;
				break;
			}
		}
	}

	return max;
}

void MaximumXOROfTwoNumberInAnArray::run() {
	vector<int> list;

	list.push_back(8);
	list.push_back(10);
	list.push_back(2);

	cout << "The max XOR is: " << findMaximumXOR(list) << endl;
}

// static Leetcode *lc = new MaximumXOROfTwoNumberInAnArray();
