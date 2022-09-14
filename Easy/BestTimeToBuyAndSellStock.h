#pragma once

#include <vector>

using std::vector;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int profit = 0;

        while (j < prices.size())
        {
            if (prices[j] - prices[i] < 0)
            {
                i = j;
            }
            else {
                profit = std::max(prices[j] - prices[i], profit);
            }
            j++;
        }

        return profit;
    }
};