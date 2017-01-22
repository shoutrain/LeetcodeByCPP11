/*
 * GasStation.h
 *
 *  Created on: Jan 22, 2017
 *      Author: rafael
 */

#ifndef SRC_GASSTATION_H_
#define SRC_GASSTATION_H_

#include "Leetcode.h"

#include <vector>
#include <iostream>

using namespace std;

class GasStation: public Leetcode {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost);

    virtual void run() final;
};

#endif /* SRC_GASSTATION_H_ */
