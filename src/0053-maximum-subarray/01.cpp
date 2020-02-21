/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 19 01:03:29 2020
 ************************************************************************/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int temp = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (temp > 0)
                temp += nums[i];
            else
                temp = nums[i];
            ans = max(ans, temp);
        }
        return ans;
    }
};
