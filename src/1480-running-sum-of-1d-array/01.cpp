/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Aug  5 13:00:49 2020
 ************************************************************************/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len, 0);
        int sum = 0;
        for (int i = 0; i < len; ++i) {
            sum +=  nums[i];
            ans[i] = sum;
        }
        return ans;
    }
};
