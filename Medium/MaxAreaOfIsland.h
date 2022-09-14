#pragma once

#include <vector>

using std::vector;

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    int count = 0;
                    mark(grid, i, j, count);
                    area = std::max(area, count);
                }
            }
        }
        return area;
    }

private:
    void mark(vector<vector<int>>& grid, int row, int col, int& area) {

        if (row < 0 || row > grid.size() - 1) return;
        if (col < 0 || col > grid[row].size() - 1) return;
        if (grid[row][col] != 1) return;

        area++;
        grid[row][col] = 2;

        // Check the left neighbor
        mark(grid, row, col - 1, area);
        // Check the top neighbor
        mark(grid, row - 1, col, area);
        // Check the right neighbor
        mark(grid, row, col + 1, area);
        // Check the bottom neighbor
        mark(grid, row + 1, col, area);
    }
};