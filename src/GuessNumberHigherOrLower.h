/*
 * GuessNumberHigherOrLower.h
 *
 *  Created on: Sep 29, 2016
 *      Author: rafael
 */

#ifndef GUESSNUMBERHIGHERORLOWER_H_
#define GUESSNUMBERHIGHERORLOWER_H_

#include "Leetcode.h"

class GuessNumberHigherOrLower: public Leetcode {
public:
	int guessNumber(int n);

	virtual void run() final;
};

#endif /* GUESSNUMBERHIGHERORLOWER_H_ */
