/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Mar 21 23:04:16 2020
 ************************************************************************/

class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if (x + y < z) 
            return false;
        if (x == 0 || y == 0) 
            return z == 0 || x + y == z;
        return z % gcd(x, y) == 0;
    }
};
