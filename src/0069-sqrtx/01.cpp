/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# Mail: hing123@126.com
# Created Time: Mon Feb  3 11:18:47 2020
 ************************************************************************/

class Solution {
public:
    int mySqrt(int x) {
        for (unsigned int i = 1; i <= x; ++i) {
            if (i * i <= x && x < (i + 1) * (i + 1))
                return i;
        }
        return 0;
    }
};
