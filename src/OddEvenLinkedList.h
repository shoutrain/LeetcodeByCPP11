/*
 * OddEvenLinkedList.h
 *
 *  Created on: Sep 26, 2016
 *      Author: rafael
 */

#ifndef SRC_ODDEVENLINKEDLIST_H_
#define SRC_ODDEVENLINKEDLIST_H_

#include "Leetcode.h"

class OddEvenLinkedList: public Leetcode {
public:
	ListNode *oddEvenList(ListNode *head);

	virtual void run() final;
};

#endif /* SRC_ODDEVENLINKEDLIST_H_ */
