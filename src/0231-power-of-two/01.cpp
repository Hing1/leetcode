/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Feb 25 23:50:00 2020
 ************************************************************************/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1)
            return false;
        while (n != 1) {
            if (n % 2)
                return false;
            n = n / 2;
        }
        return true;
    }
};
