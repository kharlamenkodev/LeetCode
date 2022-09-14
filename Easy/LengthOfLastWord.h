#pragma once

#include <string>

using std::string;

class Solution {
public:
    int lengthOfLastWord(string s) {
        auto it = s.crbegin();

        bool finded = false;
        uint32_t count = 0;

        while (it != s.crend())
        {
            if (finded)
            {
                if (*it == ' ')
                {
                    break;
                }
                else
                {
                    count++;
                }
            }
            else
            {
                if (*it != ' ')
                {
                    count++;
                    finded = true;
                }

            }

            it++;
        }

        return count;
    }
};