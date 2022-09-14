#pragma once

#include <vector>
#include <map>

using std::map;
using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map <int, int> numbersMap;

        for (auto i = 0; i < nums.size(); i++)
        {
            int number = target - nums[i];

            auto it = numbersMap.find(number);

            if (it != numbersMap.end())
            {
                return { it->second, i };
            }

            numbersMap[nums[i]] = i;
        }
        return {};
    }
};