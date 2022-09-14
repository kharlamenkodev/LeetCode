#pragma once

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        int res = 0;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (!isBadVersion(mid))
                l = mid + 1;
            else {
                res = mid;
                r = mid - 1;
            }
        }
        return res;
    }
};