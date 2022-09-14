#pragma once

#include <vector>

using std::vector;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result{ {1} };
        for (auto i = 0; i < rowIndex; i++) {
            vector <int> temp{ 1 };
            for (auto j = 0; j < rowIndex - (rowIndex - i); j++) {
                temp.push_back(result[i][j] + result[i][j + 1]);
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        return result[rowIndex];
    }
};