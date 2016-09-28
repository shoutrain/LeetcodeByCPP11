/*
 * GuessNumberHigherOrLowerII.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: rafael
 */

#include "GuessNumberHigherOrLowerII.h"

#include <iostream>

using namespace std;

int GuessNumberHigherOrLowerII::_cal(int *table, int n, int start, int end) {
	if (start >= end) {
		return 0;
	}

	if (start == end - 1) {
		return start;
	}

	int *p = table + (start - 1) * n + (end - 1);

	if (0 != *p) {
		return *p;
	}

	decltype(start) min = 0;

	for (decltype(start) i = end - 1; i > start; i--) {
		decltype(start) high = _cal(table, n, i + 1, end);
		decltype(end) low = _cal(table, n, start, i - 1);
		decltype(start) val = i + (high >= low ? high : low);

		if (0 == min || min > val) {
			min = val;
		}
	}

	*p = min;

	return min;
}

int GuessNumberHigherOrLowerII::getMoneyAmount(int n) {
	int table[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			table[i][j] = 0;
		}
	}

	return _cal((int *)table, n, 1, n);
}

void GuessNumberHigherOrLowerII::run() {
	int num = 25;

	for (decltype(num) i = 1; i <= num; i++) {
		cout << i << " of money: " << getMoneyAmount(i) << endl;
	}
}

static Leetcode *lc = new GuessNumberHigherOrLowerII();
