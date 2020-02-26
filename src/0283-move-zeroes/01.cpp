/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 00:11:31 2020
 ************************************************************************/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, j = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                if (i == j) {
                    ++j;
                } else {
                    nums[i] ^= nums[j];
                    nums[j] ^= nums[i];
                    nums[i] ^= nums[j];
                    ++j;
                }
            }
        }
    }
};
