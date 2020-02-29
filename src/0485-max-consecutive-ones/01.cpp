/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Mar  1 00:34:42 2020
 ************************************************************************/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        nums.push_back(0);
        bool hasBegin = false;
        int count = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                hasBegin = true;
                ++count;
            } else if (hasBegin) {
                ans = max(ans, count);
                count = 0;
                hasBegin = false;
            }
        }
        return ans;
    }
};
