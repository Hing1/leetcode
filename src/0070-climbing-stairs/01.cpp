/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 20 18:22:41 2020
 ************************************************************************/

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 0)
            return 1;
        vector<int> vi(n + 1, 0);
        vi[0] = 1;
        vi[1] = 1;
        for (int i = 2; i <= n; ++i) {
            vi[i] = vi[i - 1] + vi[i - 2];
        }
        return vi[n];
    }
};
