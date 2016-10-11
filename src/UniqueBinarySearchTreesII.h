/*
 * UniqueBinarySearchTreesII.h
 *
 *  Created on: Oct 11, 2016
 *      Author: rafael
 */

#ifndef UNIQUEBINARYSEARCHTREESII_H_
#define UNIQUEBINARYSEARCHTREESII_H_

#include "Leetcode.h"

#include <vector>

using namespace std;

class UniqueBinarySearchTreesII: public Leetcode {
public:
	vector<TreeNode *> generateTrees(int n);

	virtual void run() final;

private:
	TreeNode *clone(TreeNode *tree);
};

#endif /* UNIQUEBINARYSEARCHTREESII_H_ */
