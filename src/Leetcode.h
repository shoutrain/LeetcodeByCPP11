/*
 * Leetcode.h
 *
 *  Created on: Sep 21, 2016
 *      Author: rafael
 */

#ifndef SRC_LEETCODE_H_
#define SRC_LEETCODE_H_

/**
 * Definition for singly-linked list.
 */
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) :
			val(x), next(nullptr) {
	}
};

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :
			val(x), left(nullptr), right(nullptr) {
	}
};

class Leetcode {
public:
	const static int maxNum = 512;

	Leetcode();
	virtual ~Leetcode();

	virtual void run() = 0;

	static unsigned int getIndex() {
		return _index;
	}

	static Leetcode *getLeetcode(unsigned int index) {
		if (index >= _index) {
			return nullptr;
		}

		return _leetcodes[index];
	}

private:
	static unsigned int _index;
	static Leetcode *_leetcodes[];
};

#endif /* SRC_LEETCODE_H_ */
