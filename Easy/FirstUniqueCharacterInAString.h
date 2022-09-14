#pragma once

#include <string>
#include <unordered_map>

using std::string;
using std::unordered_map;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> umap;

        for (auto i = 0; i < s.size(); i++) {
            umap[s[i]]++;
        }

        for (auto i = 0; i < s.size(); i++) {
            if (umap[s[i]] == 1) return i;
        }

        return -1;
    }
};