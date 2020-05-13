/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed May 13 23:31:21 2020
 ************************************************************************/

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        for (int i = 0; i < index.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (index[j] >= index[i])
                    ++index[j];
            }
        }
        int len = nums.size();
        vector<int> ans(len, 0);
        for (int i = 0; i < len; ++i) {
            ans[index[i]] = nums[i];
        }
        return ans;
    }
};
