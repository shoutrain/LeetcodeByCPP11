/*
 * UniquePathsII.h
 *
 *  Created on: Oct 10, 2016
 *      Author: rafael
 */

#ifndef SRC_UNIQUEPATHSII_H_
#define SRC_UNIQUEPATHSII_H_

#include "Leetcode.h"

#include <vector>

using namespace std;

class UniquePathsII: public Leetcode {
public:
	int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid);

	virtual void run() final;
};

#endif /* SRC_UNIQUEPATHSII_H_ */
