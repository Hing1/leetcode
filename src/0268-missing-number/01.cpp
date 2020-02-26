/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 26 17:00:39 2020
 ************************************************************************/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> vb(nums.size() + 1, false);
        for (int i = 0; i < nums.size(); ++i) {
            vb[nums[i]] = true;
        }
        for (int i = 0; i < vb.size(); ++i) {
            if (!vb[i])
                return i;
        }
        return -1;
    }
};
