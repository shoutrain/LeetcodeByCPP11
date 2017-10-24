/*
 * GasStation.cpp
 *
 *  Created on: Jan 22, 2017
 *      Author: rafael
 */

#include "GasStation.h"

int GasStation::canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
	if (gas.size() == 0 || gas.size() != cost.size()) {
		return -1;
	}

	auto start = 0;
	auto end = 0;
	auto length = end - start + 1;
	auto remainGas = gas[start] - cost[start];

	while (length < gas.size()) {
		if (remainGas >= 0) {
			end++;
			length++;

			if (end >= gas.size() - 1) {
				end = 0;
			}

			remainGas += (gas[end] - cost[end]);
		} else {
			start--;
			length++;

			if (start <= -1) {
				start = gas.size() - 1;
			}

			remainGas += (gas[start] - cost[start]);
		}
	}

	if (length == gas.size() && remainGas >= 0) {
		return start;
	}

	return -1;
}

void GasStation::run() {
	vector<int> gas = { 2, 0, 1, 2, 3, 4, 0 };
	vector<int> cost = { 0, 1, 0, 0, 0, 0, 11 };

	cout << "result: " << canCompleteCircuit(gas, cost) << endl;
}

// static Leetcode *lc = new GasStation();
