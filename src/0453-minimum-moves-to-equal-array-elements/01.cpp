/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Feb 29 23:54:05 2020
 ************************************************************************/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int len = nums.size();
        if (len <= 1)
            return 0;
        int min = nums[0];
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        long int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            ans += (long int)nums[i] - (long int)min;
        }
        return ans;
    }
};
