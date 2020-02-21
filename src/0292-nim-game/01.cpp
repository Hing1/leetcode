/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Wed Jan  8 20:05:38 2020
 ************************************************************************/

class Solution {
public:
    bool canWinNim(int n) {
#if 0
        if (n == 1 || n == 2 || n == 3)
            return true;
        if (n == 4)
            return false;
        return !(canWinNim(n - 1) && canWinNim(n - 2) && canWinNim(n - 3));
#endif
        return n & 3;
    }
};
