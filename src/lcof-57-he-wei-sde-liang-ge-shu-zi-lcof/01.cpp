/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 16:57:47 2020
 ************************************************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int sum = nums[i] + nums[j];
            if (sum == target) {
                return {nums[i], nums[j]};
            } else if (sum < target) {
                ++i;
            } else {
                --j;
            }
        }
        return {-1, -1};
    }
};
