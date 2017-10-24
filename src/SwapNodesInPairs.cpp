/*
 * SwapNodesInPairs.cpp
 *
 *  Created on: Sep 23, 2016
 *      Author: rafael
 */

#include "SwapNodesInPairs.h"

#include <iostream>

using namespace std;

ListNode *SwapNodesInPairs::swapPairs(ListNode *head) {
	if (nullptr == head) {
		return nullptr;
	}

	if (nullptr == head->next) {
		return head;  // there is only one node.
	}

	ListNode *second = head->next;

	if (nullptr == second->next) {
		head->next = nullptr;
		second->next = head;

		return second;
	}

	head->next = swapPairs(second->next);
	second->next = head;

	return second;
}

void SwapNodesInPairs::run() {
	unsigned int size = 9;
	ListNode *lns[size];
	decltype(size) i = 0;

	cout << "Old array: ";

	for (; i < size; i++) {
		lns[i] = new ListNode(i + 1);
	}

	for (i = 0; i < size; i++) {
		if (size - 1 != i) {
			lns[i]->next = lns[i + 1];
		}

		 cout << lns[i]->val << "    ";
	}

	cout << endl;

	ListNode *newLns = swapPairs(lns[0]);

	cout << "New array: ";

	while (nullptr != newLns) {
		cout << newLns->val << "    ";
		newLns = newLns->next;
	}

	cout << endl;
}

// static Leetcode *lc = new SwapNodesInPairs();
