#pragma once
#include <vector>

using std::vector;

class SearchInsertPosition
{

public:

    int searchInsert(const vector<int>& nums, const int target) {

        int leftIndex = 0;
        int rightIndex = nums.size() - 1;
        int midIndex = 0;

        while (leftIndex <= rightIndex){

            midIndex = (rightIndex + leftIndex) / 2;        

            if (nums.at(midIndex) > target){
                rightIndex = midIndex - 1;
            }
            else if (nums.at(midIndex) < target){
                leftIndex = midIndex + 1;
            }
            else{
                break;
            }
        }

        if (leftIndex > rightIndex)
        {
            midIndex = leftIndex;
        }

        return midIndex;
    }
};