/*
 * PowerOfFour.h
 *
 *  Created on: Nov 16, 2016
 *      Author: rafael
 */

#ifndef POWEROFFOUR_H_
#define POWEROFFOUR_H_

#include "Leetcode.h"

#include <iostream>
using namespace std;

class PowerOfFour: public Leetcode {
public:
	bool isPowerOfFour(int num);

	virtual void run() final;
};

#endif /* POWEROFFOUR_H_ */
