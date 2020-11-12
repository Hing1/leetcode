/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Nov 12 16:29:38 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int len = intervals.size();
        if (len < 1)
            return {};
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for (int i = 1; i < len; i++) {
            vector<int> curr = intervals[i];
            if (curr[0] <= res.back()[1]) {
                res.back()[1] = max(res.back()[1], curr[1]);
            } else {
                res.push_back(curr);
            }
        }
        return res;
    }
};
