/*
 * UniquePaths.h
 *
 *  Created on: Oct 9, 2016
 *      Author: rafael
 */

#ifndef UNIQUEPATHS_H_
#define UNIQUEPATHS_H_

#include "Leetcode.h"

class UniquePaths: public Leetcode {
public:
	int uniquePaths(int m, int n);

	virtual void run() final;
};

#endif /* UNIQUEPATHS_H_ */
