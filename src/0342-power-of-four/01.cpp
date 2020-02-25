/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Feb 25 23:54:09 2020
 ************************************************************************/

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n < 1)
            return false;
        while (n != 1) {
            if (n % 4)
                return false;
            n = n / 4;
        }
        return true;
    }
};
