/*
 * DecodeWays.h
 *
 *  Created on: Sep 30, 2016
 *      Author: rafael
 */

#ifndef DECODEWAYS_H_
#define DECODEWAYS_H_

#include "Leetcode.h"

#include <iostream>
#include <string>

using namespace std;

class DecodeWays: public Leetcode {
public:
	int numDecodings(string s);

	virtual void run() final;
};

#endif /* DECODEWAYS_H_ */
