/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Feb 24 00:02:41 2020
 ************************************************************************/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int ans = 0;
        for (int i = 0; i < 32; ++i) {
            if (n > 0) {
                ans = n % 2 + ans * 2;
                n = n / 2;
            } else {
                ans = ans * 2;
            }
        }
        return ans;
    }
};
