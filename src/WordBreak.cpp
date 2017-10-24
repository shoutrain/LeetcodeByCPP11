/*
 * WordBreak.cpp
 *
 *  Created on: May 23, 2017
 *      Author: rafael
 */

#include "WordBreak.h"

#include <string.h>

bool WordBreak::wordBreak(string s, vector<string> &wordDict) {
	char mapI[26];
	char mapII[26];
	int minWordSize = 0;

	memset(mapI, 0, 26);
	memset(mapII, 0, 26);

	for (int i = 0; i < s.size(); i++) {
		mapI[s[i] - 'a'] = 1;
	}

	for (int i = 0; i < wordDict.size(); i++) {
		string tmp = wordDict[i];

		if (minWordSize == 0) {
			minWordSize = tmp.size();
		} else if (minWordSize > tmp.size()) {
			minWordSize = tmp.size;
		}

		for (int j = 0; j < tmp.size(); j++) {
			mapII[tmp[j] - 'a'] = 1;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (mapI[i] == 1 && mapII[i] == 0) {
			return false;
		}
	}

	return _wordBreak(s, wordDict, minWordSize);
}

bool WordBreak::_wordBreak(string s, vector<string> &wordDict, int minWordSize) {
	if (s.size() == 0) {
		return true;
	}

	if (s.size() < minWordSize) {
		return false;
	}

	for (int i = minWordSize; i <= s.size(); i++) {

	}

	return false;
}

void WordBreak::run() {
	string s =
			"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	vector<string> wordDict;

	wordDict.push_back("aa");
	wordDict.push_back("aaa");
	wordDict.push_back("aaaa");
	wordDict.push_back("aaaaa");
	wordDict.push_back("aaaaaa");
	wordDict.push_back("aaaaaaa");
	wordDict.push_back("aaaaaaaa");
	wordDict.push_back("aaaaaaaaa");
	wordDict.push_back("aaaaaaaaaa");
	wordDict.push_back("ba");

	if (wordBreak(s, wordDict)) {
		cout << "it works" << endl;
	} else {
		cout << "it doesn't work" << endl;
	}
}

static Leetcode *lc = new WordBreak();
