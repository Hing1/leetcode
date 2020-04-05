/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Apr  5 23:00:47 2020
 ************************************************************************/

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        for (int i = 0; i < ops.size(); ++i) {
            m = min(m, ops[i][0]);
            n = min(n, ops[i][1]);
        }
        return m * n;
    }
};
