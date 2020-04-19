/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Apr 19 20:39:35 2020
 ************************************************************************/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> vi(nums);
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int left = 0;
        while (left < len && nums[left] == vi[left]) {
            ++left;
        }
        int right = len - 1;
        while (right >= 0 && nums[right] == vi[right]) {
            --right;
        }
        if (right > left)
            return right - left + 1;
        else
            return 0;
    }
};
