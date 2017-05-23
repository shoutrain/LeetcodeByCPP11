/*
 * UniquePathsII.cpp
 *
 *  Created on: Oct 10, 2016
 *      Author: rafael
 */

#include "UniquePathsII.h"

#include <iostream>

int UniquePathsII::uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
	auto rowSize = obstacleGrid.size();

	if (rowSize == 0) {
		return 0;
	}

	auto colSize = obstacleGrid[0].size();

	if (colSize == 0) {
		return 0;
	}

	if (obstacleGrid[0][0] == 1
			|| obstacleGrid[rowSize - 1][colSize - 1] == 1) {
		return 0;
	}

	obstacleGrid[0][0] = -1;

	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			if (obstacleGrid[i][j] == 1) {
				continue;
			}

			if (i > 0 && obstacleGrid[i - 1][j] != 1) {
				obstacleGrid[i][j] += obstacleGrid[i - 1][j];
			}

			if (j > 0 && obstacleGrid[i][j - 1] != 1) {
				obstacleGrid[i][j] += obstacleGrid[i][j - 1];
			}
		}
	}

	return -obstacleGrid[rowSize - 1][colSize - 1];
}

void UniquePathsII::run() {
	vector<vector<int>> grid = { { 0, 0, 0 }, { 0, 1, 0 }, { 0, 0, 0 } };

	cout << "result: " << uniquePathsWithObstacles(grid) << endl;
}

static Leetcode *uniquePathsII = new UniquePathsII();
