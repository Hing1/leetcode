/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 12 21:43:51 2020
 ************************************************************************/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex < 0) {
            vector<int> ans;
            return ans;
        } else if (rowIndex == 0) {
            vector<int> ans;
            ans.push_back(1);
            return ans;
        } else {
            vector<int> pre = getRow(rowIndex - 1);
            vector<int> ans = {1};
            for (int i = 0; i < pre.size() - 1; ++i) {
                ans.push_back(pre[i] + pre[i + 1]);
            }
            ans.push_back(1);
            return ans;
        }
    }
};
