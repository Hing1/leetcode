/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Aug  5 23:31:11 2020
 ************************************************************************/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> bucket(501, 0);
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            ++bucket[nums[i]];
        }
        for (int i = 0; i < 500; ++i) {
            bucket[i + 1] += bucket[i];
        }
        vector<int> ans(len, 0);
        for (int i = 0; i < len; ++i) {
            if (nums[i])
                ans[i] = bucket[nums[i] - 1];
            else
                ans[i] = 0;
        }
        return ans;
    }
};
