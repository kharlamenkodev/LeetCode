#pragma once

#include <vector>
#include <string>

using std::vector;
using std::string;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int res = 0;
        for (int i = 0; i < strs.front().size(); i++) {
            for (int j = 0; j < strs.size() - 1; j++) {
                if (strs[j][i] > strs[j + 1][i]) {
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};