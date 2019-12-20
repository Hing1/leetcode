/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Fri Dec 20 19:27:51 2019
 ************************************************************************/

class Solution {
public:
    int hammingWeight(uint_32 n) {
        int mask = 1;
        int bits = 0;
        for (int i = 0; i < 32; i++) {
            mask = (1 << i);
            if(mask & n)
                bits++;
        }
        return bits;
    }
};
