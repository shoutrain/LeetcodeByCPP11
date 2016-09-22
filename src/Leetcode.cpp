/*
 * Leetcode.cpp
 *
 *  Created on: Sep 21, 2016
 *      Author: rafael
 */

#include "Leetcode.h"

unsigned int Leetcode::_index = 0;
Leetcode *Leetcode::_leetcodes[Leetcode::maxNum];

Leetcode::Leetcode() {
	_leetcodes[_index++] = this;
}

Leetcode::~Leetcode() {
}

#include "ReverseString.h"

int main() {
	auto num = Leetcode::getIndex();
	decltype(num) i = 0;

	for (; i < num; i++) {
		Leetcode *lc = Leetcode::getLeetcode(i);

		lc->run();
	}

	return 0;
}
