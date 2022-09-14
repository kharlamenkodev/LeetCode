#pragma once

#include <string>
#include <unordered_map>

using std::string;
using std::unordered_map;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map <char, int> umap;
        for (auto i = 0; i < magazine.size(); i++) {
            umap[magazine[i]]++;
        }

        for (auto i = 0; i < ransomNote.size(); i++) {
            auto it = umap.find(ransomNote[i]);
            if (it != umap.end()) {
                if (it->second <= 0) {
                    return false;
                }
                else {
                    it->second--;
                }
            }
            else {
                return false;
            }
        }

        return true;
    }
};