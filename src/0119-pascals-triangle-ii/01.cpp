/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 12 21:43:51 2020
 ************************************************************************/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.reserve(rowIndex + 1);
        if (rowIndex >= 0) {
            ans.push_back(1);
            if (rowIndex >= 1) {
                vector<int> pre = getRow(rowIndex - 1);
                for (int i = 0; i < rowIndex - 1; ++i) {
                    ans.push_back(pre[i] + pre[i + 1]);
                }
                ans.push_back(1);
            }
        }
        return ans;
    }
};
