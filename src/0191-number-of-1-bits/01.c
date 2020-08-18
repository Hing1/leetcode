/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Fri Dec 20 19:27:51 2019
 ************************************************************************/

int hammingWeight(uint32_t n) {
    int ans = 0;
    while (n) {
        n = n & (n - 1);
        ++ans;
    }
    return ans;
}
