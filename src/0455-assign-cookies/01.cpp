/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Mar  1 00:09:34 2020
 ************************************************************************/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans = 0;
        for (int i = g.size() - 1, j = s.size() - 1; i >= 0 && j >= 0; --i) {
            if (g[i] <= s[j]) {
                --j;
                ++ans;
            }
        }
        return ans;
    }
};
