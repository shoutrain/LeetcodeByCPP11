/*
 * GuessNumberHigherOrLower.cpp
 *
 *  Created on: Sep 29, 2016
 *      Author: rafael
 */

#include "GuessNumberHigherOrLower.h"

#include <iostream>

using namespace std;

int guess(int num) {
	const decltype(num) n = 1702766719;

	if (n < num) {
		return -1;
	}

	if (n > num) {
		return 1;
	}

	return 0;
}

int GuessNumberHigherOrLower::guessNumber(int n) {
	decltype(n) l = 1;
	decltype(n) r = n;
	decltype(n) m = l + ((r - l) >> 1);

	while (true) {
		int ret = guess(m);

		if (0 > ret) {
			r = m;
		} else if (0 < ret) {
			if (l == m) {
				m = r;
				break;
			}

			l = m;
		} else {
			break;
		}

		m = l + ((r - l) >> 1);
	}

	return m;
}

void GuessNumberHigherOrLower::run() {
	const int n = 2126753390;
	cout << "1~" << n << ": " << guessNumber(n) << endl;
}

static Leetcode *lc = new GuessNumberHigherOrLower();
