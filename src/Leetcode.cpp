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
#include "SwapNodesInPairs.h"
#include "OddEvenLinkedList.h"
#include "GuessNumberHigherOrLower.h"
#include "GuessNumberHigherOrLowerII.h"

#include <typeinfo>
#include <iostream>

using namespace std;

int main() {
	auto num = Leetcode::getIndex();
	decltype(num) i = 0;
	Leetcode *lc = nullptr;

	for (; i < num; i++) {
		Leetcode *lc = Leetcode::getLeetcode(i);

		cout << endl;
		cout << typeid(*lc).name() << " ---" << endl;
		lc->run();
	}

	return 0;
}
