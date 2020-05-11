/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon May 11 10:25:33 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int nr = nums.size();
        int nc = nums[0].size();
        if (nr * nc != r * c)
            return nums;
        vector<vector<int>> ans;
        ans.reserve(r);
        vector<int> temp(c, 0);
        int j2 = 0;
        for (int i1 = 0; i1 < nr; ++i1) {
            for (int j1 = 0; j1 < nc; ++j1) {
                temp[j2++] = nums[i1][j1];
                if (j2 == c) {
                    j2 = 0;
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
