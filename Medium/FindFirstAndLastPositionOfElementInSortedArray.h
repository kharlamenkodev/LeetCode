#pragma once

#include <vector>

using std::vector;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = -1;
        int last = -1;

        for (size_t i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                first == -1 ? first = last = i : last = i;
            }
        }

        return { first, last };

    }
};