/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Feb 29 23:39:08 2020
 ************************************************************************/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        vector<int> vi(len + 1, 0);
        for (int i = 0; i < len; ++i) {
            ++vi[nums[i]];
        }
        vector<int> ans;
        for (int i = 1; i < len + 1; ++i) {
            if (vi[i] == 0)
                ans.push_back(i);
        }
        return ans;
    }
};
