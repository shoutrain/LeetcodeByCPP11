/*
 * IntegerReplacement.cpp
 *
 *  Created on: Nov 5, 2016
 *      Author: rafael
 */

#include "IntegerReplacement.h"

#include <iostream>

using namespace std;

int IntegerReplacement::integerReplacement(int n) {
	long long m = n;
	int minNum = 0;

	while (m != 1) {
		if (m == 3) {
			m = 2;
		} else if (m & 1 == 1) {
			long long sub = m & 0xfffffffe;
			long long plus = m + 1;

			int i = 0;
			int j = 0;

			while (sub != 1) {
				if (sub & 1 == 1) {
					i++;
				}

				sub >>= 1;
			}

			while (plus != 1) {
				if (plus & 1 == 1){
					j++;
				}

				plus >>= 1;
			}

			if (i < j) {
				m &= 0xfffffffe;
			} else {
				m += 1;
			}
		} else {
			m >>= 1;
		}

		minNum++;
	}

	return minNum;
}

void IntegerReplacement::run() {
	cout << "3's minimum is: " << integerReplacement(3) << endl;
	cout << "6's minimum is: " << integerReplacement(6) << endl;
	cout << "7's minimum is: " << integerReplacement(7) << endl;
	cout << "8's minimum is: " << integerReplacement(8) << endl;
	cout << "11's minimum is: " << integerReplacement(11) << endl;
	cout << "1234's minimum is: " << integerReplacement(1234) << endl;
	cout << "65535's minimum is: " << integerReplacement(65535) << endl;
	cout << "10000000's minimum is: " << integerReplacement(10000000) << endl;
	cout << "100000000's minimum is: " << integerReplacement(100000000) << endl;
	cout << "2147483647's minimum is: " << integerReplacement(2147483647) << endl;
}

Leetcode *lc = new IntegerReplacement();
