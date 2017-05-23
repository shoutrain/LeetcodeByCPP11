/*
 * NumberOf1Bits.cpp
 *
 *  Created on: Nov 16, 2016
 *      Author: rafael
 */

#include "NumberOf1Bits.h"

int NumberOf1Bits::hammingWeight(unsigned int n) {
	int m = 0;
	long long l = n;

	while (l != 0) {
		if ((l & 1) == 1) {
			m++;
		}

		l >>= 1;
	}

	return m;
}

void NumberOf1Bits::run() {
	cout << "5's hamming weight: " << hammingWeight(5) << endl;
	cout << "33's hamming weight: " << hammingWeight(33) << endl;
	cout << "99's hamming weight: " << hammingWeight(99) << endl;
	cout << "9823's hamming weight: " << hammingWeight(9823) << endl;
}

static Leetcode *numberOf1Bits = new NumberOf1Bits();
