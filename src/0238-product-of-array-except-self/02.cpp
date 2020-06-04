/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Jun  4 10:14:09 2020
 ************************************************************************/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len, 1);
        for (int i = 1; i < len; ++i) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        int after = 1;
        for (int i = len - 1; i >= 0; --i) {
            ans[i] *= after;
            after *= nums[i];
        }
        return ans;
    }
};
