/*
 * OddEvenLinkedList.cpp
 *
 *  Created on: Sep 26, 2016
 *      Author: rafael
 */

#include "OddEvenLinkedList.h"

#include <iostream>

using namespace std;

ListNode *OddEvenLinkedList::oddEvenList(ListNode *head) {
	ListNode *oddList = head;
	ListNode *evenList =
			(nullptr != oddList && nullptr != oddList->next) ?
					oddList->next : nullptr;
	ListNode *lastOddNode = nullptr;
	unsigned int i = 1;

	while (nullptr != head) {
		ListNode *temp = head->next;

		if (nullptr != temp) {
			head->next = temp->next;
		}

		if (1 == i % 2) {
			lastOddNode = head;
		}

		head = temp;
		i++;
	}

	if (nullptr != lastOddNode) {
		lastOddNode->next = evenList;
	}

	return oddList;
}

void OddEvenLinkedList::run() {
	unsigned int size = 3;
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

	ListNode *newLns = oddEvenList(lns[0]);

	cout << "New array: ";

	while (nullptr != newLns) {
		cout << newLns->val << "    ";
		newLns = newLns->next;
	}

	cout << endl;
}

Leetcode *lc = new OddEvenLinkedList();
