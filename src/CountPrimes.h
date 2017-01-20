/*
 * CountPrimes.h
 *
 *  Created on: Jan 19, 2017
 *      Author: rafael
 */

#ifndef COUNTPRIMES_H_
#define COUNTPRIMES_H_

#include "Leetcode.h"

class CountPrimes: public Leetcode {
public:
    int countPrimes(int n);

    virtual void run() final;
};

#endif /* COUNTPRIMES_H_ */
