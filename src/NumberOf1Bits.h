/*
 * NumberOf1Bits.h
 *
 *  Created on: Nov 16, 2016
 *      Author: rafael
 */

#ifndef SRC_NUMBEROF1BITS_H_
#define SRC_NUMBEROF1BITS_H_

#include "Leetcode.h"

#include <iostream>

using namespace std;

class NumberOf1Bits: public Leetcode {
public:
    int hammingWeight(unsigned int n);

    virtual void run() final;
};

#endif /* SRC_NUMBEROF1BITS_H_ */
