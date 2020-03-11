/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar 11 22:00:08 2020
 ************************************************************************/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> bucket(101, 0);
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            ++bucket[nums[i]];
        }
        int sum = bucket[0];
        bucket[0] = 0;
        for (int i = 1; i < 101; ++i) {
            int temp = bucket[i];
            bucket[i] = sum;
            sum += temp;
        }
        vector<int> ans(len, 0);
        for (int i = 0; i < len; ++i) {
            ans[i] = bucket[nums[i]];
        }
        return ans;
    }
};
