/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Aug 20 14:37:58 2020
 ************************************************************************/

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        auto myCmp = [&] (const auto &a, const auto &b) {
            return (a[0] - a[1]) < (b[0] - b[1]);
        };
        sort(costs.begin(), costs.end(), myCmp);
        int ans = 0;
        int len = costs.size();
        for (int i = 0; i < len / 2; ++i) {
            ans += costs[i][0];
        }
        for (int i = len / 2; i < len; ++i) {
            ans += costs[i][1];
        }
        return ans;
    }
};
