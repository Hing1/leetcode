/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Aug  5 13:18:12 2020
 ************************************************************************/

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start;
        for (int i = 1; i < n; ++i) {
            ans ^= start + 2 * i;
        }
        return ans;
    }
};
