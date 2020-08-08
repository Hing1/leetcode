/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Aug  7 17:26:54 2020
 ************************************************************************/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        for (int i = 0; i < len; ++i)
            --nums[i];
        sort(nums.begin(), nums.end());
        return max(nums[0] * nums[1], nums[len - 2] * nums[len - 1]);
    }
};
