/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Jun  4 10:00:28 2020
 ************************************************************************/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> before(len, 1);
        for (int i = 1; i < len; ++i) {
            before[i] = before[i - 1] * nums[i - 1];
        }
        vector<int> after(len, 1);
        for (int i = len - 2; i >= 0; --i) {
            after[i] = after[i + 1] * nums[i + 1];
        }
        vector<int> ans(len, 0);
        for (int i = 0; i < len; ++i) {
            ans[i] = before[i] * after[i];
        }
        return ans;
    }
};
