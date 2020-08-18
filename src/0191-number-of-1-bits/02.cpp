/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 10:15:08 2020
 ************************************************************************/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while (n) {
            if (n % 2)
                ++ans;
            n /= 2;
        }
        return ans;
    }
};
