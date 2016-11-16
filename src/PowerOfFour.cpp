/*
 * PowerOfFour.cpp
 *
 *  Created on: Nov 16, 2016
 *      Author: rafael
 */

#include "PowerOfFour.h"

bool PowerOfFour::isPowerOfFour(int num) {
	if (num <= 0) {
		return false;
	}

	int m = num & (-num);

	if (m != num) {
		return false;
	}

	int n = 0;

	do {
		m >>= 1;
		n++;
	} while (m!= 0);

	return (n % 2) == 1;
}

void PowerOfFour::run() {
	cout << "16: " << isPowerOfFour(16) << endl;
	cout << "17: " << isPowerOfFour(17) << endl;
	cout << "18: " << isPowerOfFour(18) << endl;
	cout << "19: " << isPowerOfFour(19) << endl;
	cout << "32: " << isPowerOfFour(32) << endl;
	cout << "64: " << isPowerOfFour(64) << endl;
	cout << "128: " << isPowerOfFour(128) << endl;
	cout << "256: " << isPowerOfFour(256) << endl;
	cout << "161234: " << isPowerOfFour(161234) << endl;
	cout << "-2147483648: " << isPowerOfFour(-2147483648) << endl;
}

static Leetcode *lc = new PowerOfFour();
