/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Aug  5 13:13:08 2020
 ************************************************************************/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n, 0);
        for (int i = 0; i < n; ++i) {
            ans[i * 2] = nums[i];
            ans[i * 2 + 1] = nums[i + n];
        }
        return ans;
    }
};
