#pragma once

#include <vector>
#include <algorithm>

using std::vector;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int border = 0;
        for (auto i = 0; i < nums.size(); i++) {
            if (nums[i] < nums.front()) {
                border = i;
                break;
            }
        }

        return std::max(helper(nums, target, 0, border), helper(nums, target, border, nums.size() - 1));
    }

private:
    int helper(vector <int>& nums, int& target, int l, int r) {
        if (l > r) return -1;
        int mid = l + (r - l) / 2;
        if (target < nums[mid]) r = mid - 1;
        else if (target > nums[mid]) l = mid + 1;
        else return mid;

        return helper(nums, target, l, r);
    }
};