/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue May 12 13:59:12 2020
 ************************************************************************/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int dis = x ^ y;
        int ans = 0;
        while (dis > 0) {
            ans += dis % 2;
            dis /= 2;
        }
        return ans;
    }
};
