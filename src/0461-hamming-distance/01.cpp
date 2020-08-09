/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Aug  9 16:17:17 2020
 ************************************************************************/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        while (x || y) {
            if (x % 2 != y % 2)
                ++ans;
            x /= 2;
            y /= 2;
        }
        return ans;
    }
};
