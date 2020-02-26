/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 26 23:26:17 2020
 ************************************************************************/

class Solution {
public:
    int rob(vector<int>& nums) {
        int pre = 0;
        int cur = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int temp = cur;
            cur = max(pre + nums[i], cur);
            pre = temp;
        }
        return cur;
    }
};
