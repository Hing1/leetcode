/*************************************************************************
# File Name: 02.c
# Author: Hing
# mail: hing123@126.com
# Created Time: Fri Dec 20 19:27:51 2019
 ************************************************************************/

int hammingWeight(uint32_t n) {
    int bits = 0;
    while (n) {
        n = n & (n - 1);
        bits++;
    }
    return bits;
}
