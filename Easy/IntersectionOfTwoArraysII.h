#pragma once

#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        unordered_map <int, int> umap;

        for (auto i = 0; i < nums1.size(); i++) {
            umap[nums1[i]]++;
        }

        for (auto i = 0; i < nums2.size(); i++) {
            auto it = umap.find(nums2[i]);
            if (it != umap.end()) {
                if (it->second > 0) {
                    result.push_back(it->first);
                    it->second--;
                }
            }
        }
        return result;
    }
};