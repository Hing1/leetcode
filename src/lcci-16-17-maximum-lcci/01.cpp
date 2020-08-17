/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 03:08:52 2020
 ************************************************************************/

class Solution {
public:
    int maximum(int a, int b) {
        long c = a;
        long d = b;
        return (fabs(c - d) + c + d) / 2;
    }
};
