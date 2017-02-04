/*
 * FindKthLargest.h
 *
 *  Created on: Jan 29, 2017
 *      Author: rafael
 */

#ifndef SRC_FINDKTHLARGEST_H_
#define SRC_FINDKTHLARGEST_H_

#include "Leetcode.h"

#include <vector>

using namespace std;

class FindKthLargest: public Leetcode {
public:
	int findKthLargest(vector<int> &nums, int k);

	virtual void run() final;

private:
    int partition(vector<int> &nums, int left, int right);
};

#endif /* SRC_FINDKTHLARGEST_H_ */
