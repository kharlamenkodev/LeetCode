#pragma once

#include <string>

using std::string;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for (auto& sym : columnTitle) {
            res = res * 26 + (sym - 'A' + 1);
        }

        return res;
    }
};