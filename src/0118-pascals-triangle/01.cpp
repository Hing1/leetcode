/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 12 21:36:20 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows <= 0) {
            return {};
        } else if (numRows == 1) {
            return {{1}};
        } else {
            vector<vector<int>> ans = generate(numRows - 1);
            vector<int> pre = ans.back();
            vector<int> cur = {1};
            for (int i = 0; i < pre.size() - 1; ++i) {
                cur.push_back(pre[i] + pre[i + 1]);
            }
            cur.push_back(1);
            ans.push_back(cur);
            return ans;
        }
    }
};
