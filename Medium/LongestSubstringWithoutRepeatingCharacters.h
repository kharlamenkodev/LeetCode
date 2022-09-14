#pragma once

#include <string>

using std::string;

class Solution {
public:
	int lengthOfLongestSubstring(const string& s) {
		if (s.size() == 0) return 0;
		int result = 0;
		std::string temp;

		for (size_t i = 0; i < s.size(); i++) {
			for (size_t j = i; j < s.size(); j++) {
				int finded = temp.find(s[j]);
				if (finded != -1) {
					break;
				}
				else {
					temp += s[j];
				}
			}

			result = std::max(result, (int)temp.size());
			temp.clear();
		}

		return result;
	}
};