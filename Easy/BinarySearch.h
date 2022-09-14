#pragma once

#include <vector>

using std::vector;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return helper(nums, target, 0, nums.size() - 1);
    }

private:
    int helper(vector <int>& nums, int& target, int l, int r) {
        if (l > r) return -1;

        int mid = (l + r) / 2;
        if (nums[mid] < target) l = mid + 1;
        if (nums[mid] > target) r = mid - 1;
        if (nums[mid] == target) return mid;

        return helper(nums, target, l, r);
    }
};