/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 10:10:59 2020
 ************************************************************************/

class Solution {
public:
    int exchangeBits(int num) {
        int even = (num & 0xaaaaaaaa) >> 1;
        int odd = (num & 0x55555555) << 1;
        return even | odd;
    }
};
