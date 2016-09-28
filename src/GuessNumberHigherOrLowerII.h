/*
 * GuessNumberHigherOrLowerII.h
 *
 *  Created on: Sep 27, 2016
 *      Author: rafael
 */

#ifndef GUESSNUMBERHIGHERORLOWERII_H_
#define GUESSNUMBERHIGHERORLOWERII_H_

#include "Leetcode.h"

class GuessNumberHigherOrLowerII: public Leetcode {
public:
	int getMoneyAmount(int n);

	virtual void run() final;

private:
	int _cal(int *table, int n, int min, int max);
};

#endif /* GUESSNUMBERHIGHERORLOWERII_H_ */
