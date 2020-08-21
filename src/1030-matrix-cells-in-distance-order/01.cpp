/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Aug 21 22:09:04 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        auto myCmp = [&] (const auto &a, const auto &b) {
            return abs(a[0] - r0) + abs(a[1] - c0)
                 < abs(b[0] - r0) + abs(b[1] - c0);
        };
        vector<vector<int>> ans;
        ans.reserve(R * C);
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                ans.push_back({i, j});
            }
        }
        sort(ans.begin(), ans.end(), myCmp);
        return ans;
    }
};
