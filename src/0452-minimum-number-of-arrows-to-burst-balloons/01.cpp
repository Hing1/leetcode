/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Aug 20 14:27:25 2020
 ************************************************************************/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int len = points.size();
        if (len < 1)
            return 0;
        auto myCmp = [&] (const auto &a, const auto &b) {
            return a[1] < b[1];
        };
        sort(points.begin(), points.end(), myCmp);
        int ans = 1;
        for (int i = 1, end = points[0][1]; i < len; ++i) {
            if (points[i][0] > end) {
                ++ans;
                end = points[i][1];
            }
        }
        return ans;
    }
};
