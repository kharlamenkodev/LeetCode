#pragma once

#include <vector>

using std::vector;

class Solution {
public:
    void rotate(vector<int>& nums, int l, int r) {
        while (l < r) std::swap(nums[l++], nums[r--]);
    }

    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        rotate(nums, 0, nums.size() - k - 1);
        rotate(nums, nums.size() - k, nums.size() - 1);
        rotate(nums, 0, nums.size() - 1);
    }
};