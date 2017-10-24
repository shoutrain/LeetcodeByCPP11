/*
 * DecodeWays.cpp
 *
 *  Created on: Sep 30, 2016
 *      Author: rafael
 */

#include "DecodeWays.h"

int DecodeWays::numDecodings(string s) {
	if (0 == s.length() || '0' == s[0]) {
		return 0;
	}

	int total = 1;
	int pending = 1;

	for (int i = 1; i < s.length(); i++) {
		if (s[i] == '0') {
			if (s[i - 1] == '1' || s[i - 1] == '2') {
				total = pending;
				continue;
			} else {
				return 0;
			}
		}

		auto tmp = total;

		if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')) {
			tmp += pending;
		}

		pending = total;
		total = tmp;
	}

	return total;
}

void DecodeWays::run() {
	string s = "1212";

	cout << s << ": " << numDecodings(s) << endl;
}

// static Leetcode *lc = new DecodeWays();
