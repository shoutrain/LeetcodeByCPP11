/*
 * UniquePaths.cpp
 *
 *  Created on: Oct 9, 2016
 *      Author: rafael
 */

#include "UniquePaths.h"

#include <iostream>

using namespace std;

int UniquePaths::uniquePaths(int m, int n) {
	if (m <= 0 || n <= 0) {
		return 0;
	}

	if (m == 1 || n == 1) {
		return 1;
	}

	int metrix[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j == 0) {
				metrix[i][j] = 1;
			} else {
				metrix[i][j] = 0;

				if (i > 0) {
					metrix[i][j] += metrix[i - 1][j];
				}

				if (j > 0) {
					metrix[i][j] += metrix[i][j - 1];
				}
			}
		}
	}

	return metrix[m - 1][n - 1];
}

void UniquePaths::run() {
	cout << "2x2: " << uniquePaths(2, 2) << endl;
	cout << "2x3: " << uniquePaths(2, 3) << endl;
	cout << "3x3: " << uniquePaths(3, 3) << endl;
	cout << "4x4: " << uniquePaths(4, 4) << endl;
}

// static Leetcode *lc = new UniquePaths();
