/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Aug 13 00:55:17 2020
 ************************************************************************/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted(heights);
        sort(sorted.begin(), sorted.end());
        int ans = 0;
        for (int i = 0; i < heights.size(); ++i) {
            if (sorted[i] != heights[i])
                ++ans;
        }
        return ans;
    }
};
