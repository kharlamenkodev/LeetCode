#pragma once
#include <string>

using std::string;

class ImplementStrStr
{
public:

    int strStr(const string& haystack, const string& needle) const
    {
        for (auto i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[0])
            {
                if(haystack.compare(i, needle.size(), needle) == 0)
                {
                    return i;
                }
            }
        }

        return -1;
    }
};