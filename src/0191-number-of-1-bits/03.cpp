/*************************************************************************
# File Name: 03.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 10:16:42 2020
 ************************************************************************/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while (n) {
            n = n & (n - 1);
            ++ans;
        }
        return ans;
    }
};
