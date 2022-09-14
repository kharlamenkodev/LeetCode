#pragma once

#include <stdint.h>
#include <bitset>

using std::bitset;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset <32> b{ n };
        bitset <32> res;

        for (size_t i = 0; i < b.size(); i++) {
            res[i] = b[(b.size() - 1) - i];
        }

        return res.to_ulong();
    }
};