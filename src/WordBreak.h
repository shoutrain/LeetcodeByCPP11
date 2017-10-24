/*
 * WordBreak.h
 *
 *  Created on: May 23, 2017
 *      Author: rafael
 */

#ifndef SRC_WORDBREAK_H_
#define SRC_WORDBREAK_H_

#include "Leetcode.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class WordBreak: public Leetcode {
public:
	bool wordBreak(string s, vector<string> &wordDict);

	virtual void run() final;

private:
	bool _wordBreak(string s, vector<string> &wordDict, int minWordSize);
};

#endif /* SRC_WORDBREAK_H_ */
