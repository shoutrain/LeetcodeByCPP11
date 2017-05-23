/*
 * FindKthLargest.cpp
 *
 *  Created on: Jan 29, 2017
 *      Author: rafael
 */

#include "FindKthLargest.h"

#include <algorithm>

using namespace std;

int FindKthLargest::findKthLargest(vector<int> &nums, int k) {
    int left = 0;
    int right = nums.size() - 1;

    while (true) {
        int pos = partition(nums, left, right);

        if (pos == k - 1) {
        	return nums[pos];
        }

        if (pos > k - 1) {
        	right = pos - 1;
        } else {
        	left = pos + 1;
        }
    }
}

void FindKthLargest::run() {

}

int FindKthLargest::partition(vector<int> &nums, int left, int right) {
    int pivot = nums[left];
    int l = left + 1;
    int r = right;

    while (l <= r) {
        if (nums[l] < pivot && nums[r] > pivot) {
        	nums[l] ^= nums[r];
        	nums[r] ^= nums[l];
        	nums[l] ^= nums[r];
        	l++;
        	r--;
        }

        if (nums[l] >= pivot) {
        	l++;
        }

        if (nums[r] <= pivot) {
        	r--;
        }
    }

    int s = nums[left];

    nums[left] = nums[r];
    nums[r] = s;

    return r;
}

static Leetcode *findKthLargest = new FindKthLargest();
