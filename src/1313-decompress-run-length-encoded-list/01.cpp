/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed May 13 23:22:00 2020
 ************************************************************************/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans;
        ans.reserve(len / 2);
        for (int i = 0; i < len; i += 2) {
            for (int j = 0; j < nums[i]; ++j) {
                ans.push_back(nums[i + 1]);
            }
        }
        return ans;
    }
};
