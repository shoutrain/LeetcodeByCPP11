/*
 * ValidPerfectSquare.cpp
 *
 *  Created on: Sep 23, 2016
 *      Author: rafael
 */

#include "ValidPerfectSquare.h"

bool ValidPerfectSquare::isPerfectSquare(int num) {
	if (0 > num) {
		return false;
	}

	if (0 == num || 1 == num) {
		return true;
	}

	decltype(num) max = num / 2;

	if (0 == num % 2) {
		decltype(num) i = 2;

		for (; i <= max; i += 2) {
			decltype(num) sqr = i * i;

			if (sqr == num) {
				return true;
			}

			if (sqr > num) {
				return false;
			}
		}
	} else {
		decltype(num) i = 3;

		for (; i <= max; i += 2) {
			decltype(num) sqr = i * i;

			if (sqr == num) {
				return true;
			}

			if (sqr > num) {
				return false;
			}
		}
	}

	return false;
}

void ValidPerfectSquare::run() {

}

static Leetcode *lc = new ValidPerfectSquare();
