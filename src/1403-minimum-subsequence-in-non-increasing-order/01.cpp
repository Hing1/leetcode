/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 09:58:18 2020
 ************************************************************************/

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size(), sum = 0;
        for (int i = 0; i < len; ++i) {
            sum += nums[i];
        }
        vector<int> ans;
        ans.reserve(len / 2);
        int sumAns = 0;
        for (int i = len - 1; i >= 0; --i) {
            sumAns += nums[i];
            ans.push_back(nums[i]);
            if (2 * sumAns > sum)
                break;
        }
        return ans;
    }
};
