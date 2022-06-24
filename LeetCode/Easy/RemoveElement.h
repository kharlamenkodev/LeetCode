#pragma once
#include <vector>

using std::vector;

class RemoveElement
{

public:

    int removeElement(vector<int>& nums, const int val) 
    {
        auto it = nums.begin();

        while (it != nums.end())
        {
            if (*it == val)
            {
                it = nums.erase(it);
            }
            else
            {
                it++;
            }
        }

        return nums.size();
    }
};