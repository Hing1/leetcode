/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Feb 25 23:51:58 2020
 ************************************************************************/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1)
            return false;
        while (n != 1) {
            if (n % 3)
                return false;
            n = n / 3;
        }
        return true;
    }
};
