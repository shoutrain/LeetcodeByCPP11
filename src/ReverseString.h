/*
 * ReverseString.h
 *
 *  Created on: Sep 22, 2016
 *      Author: rafael
 */

#ifndef SRC_REVERSESTRING_H_
#define SRC_REVERSESTRING_H_

#include "Leetcode.h"

#include <string>

using namespace std;

class ReverseString: public Leetcode {
public:
    string reverseString(string s);

    virtual void run() final;
};

#endif /* SRC_REVERSESTRING_H_ */
