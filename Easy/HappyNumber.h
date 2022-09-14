#pragma once

#include <unordered_set>

using std::unordered_set;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> set;

        while (true) {
            n = getSumm(n);
            if (n == 1) return true;
            if (set.find(n) != set.end()) return false;
            set.insert(n);
        }
    }

    int getSumm(int n) {
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
};