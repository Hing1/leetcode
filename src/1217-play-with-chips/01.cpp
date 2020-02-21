/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan 14 13:41:06 2020
 ************************************************************************/

class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int odd = 0;
        int even = 0;
        for (auto &i:chips) {
            if (i % 2)
                ++odd;
            else
                ++even;
        }
        return min(odd, even);
    }
};
