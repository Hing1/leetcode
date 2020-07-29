/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Jul 29 22:14:42 2020
 ************************************************************************/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> bucket(101, 0);
        for (int i = 0; i < nums.size(); ++i) {
            ++bucket[nums[i]];
        }
        int ans = 0;
        for (int i = 0; i < 101; ++i) {
            if (bucket[i] > 1)
                ans += bucket[i] * (bucket[i] - 1) / 2;
        }
        return ans;
    }
};
