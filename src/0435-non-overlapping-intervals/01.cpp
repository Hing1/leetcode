/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Aug 20 14:14:42 2020
 ************************************************************************/

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int len = intervals.size();
        if (len < 1)
            return 0;
        auto myCmp = [&] (const auto &a, const auto &b) {
            return a[1] < b[1];
        };
        sort(intervals.begin(), intervals.end(), myCmp);
        int count = 1;
        for (int i = 1, end = intervals[0][1]; i < len; ++i) {
            if (intervals[i][0] >= end) {
                ++count;
                end = intervals[i][1];
            }
        }
        return len - count;
    }
};
