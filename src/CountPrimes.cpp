/*
 * CountPrimes.cpp
 *
 *  Created on: Jan 19, 2017
 *      Author: rafael
 */

#include "CountPrimes.h"

#include <string.h>
#include <iostream>

using namespace std;

int CountPrimes::countPrimes(int n) {
	unsigned char *arr = new unsigned char[n];

	memset(arr, 0, n);

	int m = 0;

	for (auto i = 2; i < n; i++) {
		if (arr[i] != 0) {
			continue;
		}

		m++;

		for (auto j = i + i; j < n; j += i) {
			arr[j] = 2;
		}
	}

	delete[] arr;

	return m;
}

void CountPrimes::run() {
	int n = 100;

	cout << "Count Primes - " << n << " is: " << countPrimes(n) << endl;
}

// static Leetcode *lc = new CountPrimes();
