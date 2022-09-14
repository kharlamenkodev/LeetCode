#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector <int> s1Vec;
        vector <int> s2Vec;
        for (int i = 0; i < 26; i++) {
            s1Vec.push_back(0);
            s2Vec.push_back(0);
        }

        for (int i = 0; i < s1.size(); i++) {
            s1Vec[s1[i] - 'a']++;
            s2Vec[s2[i] - 'a']++;
        }

        int l = 0;
        int r = s1.size() - 1;

        int matches = 0;
        while (r < s2.size()) {

            // Проверка векторов на совпадения
            int matches = 0;
            for (int i = 0; i < 26; i++) {
                if (s1Vec[i] == s2Vec[i]) matches++;
            }

            if (matches == 26) return true;

            s2Vec[s2[l] - 'a']--;
            l++;
            r++;
            if (r < s2.size()) s2Vec[s2[r] - 'a']++;
        }

        return false;
    }
};