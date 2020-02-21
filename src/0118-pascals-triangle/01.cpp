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
            vector<vector<int>> ans;
            return ans;
        } else if (numRows == 1) {
            vector<int> vi = {1};
            vector<vector<int>> ans;
            ans.push_back(vi);
            return ans;
        } else {
            vector<vector<int>> ans = generate(numRows - 1);
            vector<int> pre = ans.back();
            vector<int> temp = {1};
            for (int i = 0; i < pre.size() - 1; ++i) {
                temp.push_back(pre[i] + pre[i + 1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
            return ans;
        }
    }
};
