/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan 13 12:55:08 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> ans;
        vector<int> temp;
        for (int i = 0; i < A[0].size(); ++i) {
            for (int j = 0; j < A.size(); ++j) {
                temp.push_back(A[j][i]);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
