/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Feb 21 15:31:40 2020
 ************************************************************************/

class Solution {
public:
    int trailingZeroes(int n) {
        int numb_five = 0;
        while (n >= 5) {
            numb_five += n / 5;
            n = n / 5;
        }
        return numb_five;
    }
};
