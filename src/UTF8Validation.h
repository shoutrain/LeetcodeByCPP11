/*
 * UTF8Validation.h
 *
 *  Created on: Dec 6, 2016
 *      Author: rafael
 */

#ifndef UTF8VALIDATION_H_
#define UTF8VALIDATION_H_

#include "Leetcode.h"

#include <iostream>
#include <vector>
using namespace std;

class UTF8Validation: public Leetcode {
public:
	bool validUtf8(vector<int>& data);

	virtual void run() final;
};

#endif /* UTF8VALIDATION_H_ */
