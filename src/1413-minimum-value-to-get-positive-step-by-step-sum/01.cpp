/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Sep 12 17:15:52 2020
 ************************************************************************/


class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minSum = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            minSum = min(minSum, sum);
        }
        return -minSum + 1;
    }
};
