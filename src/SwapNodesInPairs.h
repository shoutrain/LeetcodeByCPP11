/*
 * SwapNodesInPairs.h
 *
 *  Created on: Sep 23, 2016
 *      Author: rafael
 */

#ifndef SRC_SWAPNODESINPAIRS_H_
#define SRC_SWAPNODESINPAIRS_H_

#include "Leetcode.h"

class SwapNodesInPairs: public Leetcode {
public:
	ListNode *swapPairs(ListNode *head);

	virtual void run() final;
};

#endif /* SRC_SWAPNODESINPAIRS_H_ */
