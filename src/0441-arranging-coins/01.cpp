/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Feb 29 23:27:45 2020
 ************************************************************************/

class Solution {
public:
    int arrangeCoins(int n) {
        if (n <= 1)
            return n;
        unsigned long int i = 1;
        while (((i + 1) * i / 2) <= n) {
            ++i;
        }
        return i - 1;
    }
};
