/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Mar 12 13:55:33 2020
 ************************************************************************/

class Solution {
public:
#if 0
	int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] < 0)
                    ++ans;
            }
        }
        return ans;
    }
#else
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = grid.size() - 1; i >= 0; --i) {
            for (int j = grid[0].size() - 1; j >= 0; --j, ++count) {
                if (grid[i][j] >= 0)
                    break;
            }
        }
        return count;
    }
#endif
};
