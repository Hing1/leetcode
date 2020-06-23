/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Jun 23 14:37:43 2020
 ************************************************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        unordered_map<int, int> index;
        for (int i = 0; i < len; ++i)
            index[nums[i]] = i;
        int other = 0;
        for (int i = 0; i < len; ++i) {
            other = target - nums[i];
            if (index.count(other) && index[other] != i)
                return {i, index[other]};
        }
        return {-1, -1};
    }
};
