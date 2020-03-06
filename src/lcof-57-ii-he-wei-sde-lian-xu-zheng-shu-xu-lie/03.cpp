/*************************************************************************
# File Name: 03.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar  6 16:50:34 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> vvi;
        vvi.reserve(16);
        int left = 1;
        int right = 2;
        while (left < right) {
            int sum = (left + right) * (right - left + 1) / 2;
            if (sum < target) {
                ++right;
            } else if (sum > target) {
                ++left;
            } else {
                vector<int> temp = {left, right};
                vvi.push_back(temp);
                ++left;
            }
        }
        vector<vector<int>> ans;
        int len = vvi.size();
        ans.reserve(len);
        for (int i = 0; i < len; ++i) {
            vector<int> temp = vvi[i];
            vector<int> ans_temp;
            ans_temp.reserve(temp[1] - temp[0] + 1);
            for (int j = temp[0]; j <= temp[1]; ++j) {
                ans_temp.push_back(j);
            }
            ans.push_back(ans_temp);
        }
        return ans;
    }
};
