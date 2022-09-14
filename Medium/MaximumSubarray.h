#pragma once

#include <vector>

using std::vector;

class Solution {
public:
    int maxSubArray(const vector<int>& nums) {

        int current = 0;
        int res = nums.front();

        for (auto& num : nums) {
            if (current < 0)
                current = 0;
            current += num;
            res = std::max(current, res);
        }

        return res;
    }
};