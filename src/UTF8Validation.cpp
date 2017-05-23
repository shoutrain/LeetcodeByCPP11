/*
 * UTF8Validation.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: rafael
 */

#include "UTF8Validation.h"

bool UTF8Validation::validUtf8(vector<int>& data) {
	for (int i = 0; i < data.size(); i++) {
		if ((data[i] & 0xf8) == 0xf0) {
			int value = (data[i] & 0x00000007) << 18;

			if ((++i) < data.size() && (data[i] & 0xc0) == 0x80) {
				value |= (data[i] & 0x0000003f) << 12;
			} else {
				return false;
			}

			if ((++i) < data.size() && (data[i] & 0xc0) == 0x80) {
				value |= (data[i] & 0x0000003f) << 6;
			} else {
				return false;
			}

			if ((++i) < data.size() && (data[i] & 0xc0) == 0x80) {
				value |= data[i] & 0x0000003f;
			} else {
				return false;
			}

			if (value < 0x00010000) {
				// return false;
			}
		} else if ((data[i] & 0xf0) == 0xe0) {
			int value = (data[i] & 0x0000000f) << 12;

			if ((++i) < data.size() && (data[i] & 0xc0) == 0x80) {
				value |= (data[i] & 0x0000003f) << 6;
			} else {
				return false;
			}

			if ((++i) < data.size() && (data[i] & 0xc0) == 0x80) {
				value |= data[i] & 0x0000003f;
			} else {
				return false;
			}

			if (value < 0x00000800) {
				// return false;
			}
		} else if ((data[i] & 0xe0) == 0xc0) {
			int value = (data[i] & 0x0000001f) << 6;

			if ((++i) < data.size() && (data[i] & 0xc0) == 0x80) {
				value |= data[i] && 0x0000003f;
			} else {
				return false;
			}

			if (value < 0x00000080) {
				// return false;
			}
		} else if ((data[i] & 0x80) == 0x00) {
		} else {
			return false;
		}
	}

	return true;
}

void UTF8Validation::run() {
	vector<int> demo =
			{ 194, 155, 231, 184, 185, 246, 176, 131, 161, 222, 174, 227, 162,
					134, 241, 154, 168, 185, 218, 178, 229, 187, 139, 246, 178,
					187, 139, 204, 146, 225, 148, 179, 245, 139, 172, 134, 193,
					156, 233, 131, 154, 240, 166, 188, 190, 216, 150, 230, 145,
					144, 240, 167, 140, 163, 221, 190, 238, 168, 139, 241, 154,
					159, 164, 199, 170, 224, 173, 140, 244, 182, 143, 134, 206,
					181, 227, 172, 141, 241, 146, 159, 170, 202, 134, 230, 142,
					163, 244, 172, 140, 191 };

	if (validUtf8(demo)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
}

static Leetcode *utf8Validation = new UTF8Validation();
