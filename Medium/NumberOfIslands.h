#pragma once

#include <vector>

using std::vector;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1') {
                    count++;
                    mark(grid, i, j);
                }
            }
        }
        return count;
    }

private:
    void mark(vector<vector<char>>& grid, int row, int col) {

        if (row < 0 || row > grid.size() - 1) return;
        if (col < 0 || col > grid[row].size() - 1) return;
        if (grid[row][col] != '1') return;

        grid[row][col] = '2';
        mark(grid, row, col - 1);
        mark(grid, row - 1, col);
        mark(grid, row, col + 1);
        mark(grid, row + 1, col);
    }
};