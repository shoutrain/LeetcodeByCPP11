/*
 * BitWiseAndOfNumbersRange.cpp
 *
 *  Created on: Jan 9, 2017
 *      Author: rafael
 */

#include "BitWiseAndOfNumbersRange.h"

int BitWiseAndOfNumbersRange::rangeBitwiseAnd(int m, int n) {
 	if (m == 0) {
		return 0;
	}

	decltype(m) count = 0;

	while (m != n) {
		m >>= 1;
		n >>= 1;
		count++;
	}

	m <<= count;

	return m;
}

void BitWiseAndOfNumbersRange::run() {

}

static Leetcode * lc = new BitWiseAndOfNumbersRange();
