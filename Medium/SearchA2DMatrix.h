#pragma once

#include <vector>

using std::vector;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (target > matrix[mid].back()) {
                l = mid + 1;
            }
            else if (target < matrix[mid].front()) {
                r = mid - 1;
            }
            else {
                return searchValue(matrix[mid], target);
            }
        }
        return false;
    }

    bool searchValue(vector <int>& vec, int target)
    {
        int l = 0;
        int r = vec.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (target > vec[mid]) {
                l = mid + 1;
            }
            else if (target < vec[mid]) {
                r = mid - 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};