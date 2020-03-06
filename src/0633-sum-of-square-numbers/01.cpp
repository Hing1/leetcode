/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Mar  5 11:47:46 2020
 ************************************************************************/

class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c < 0)
            return false;
        int left = 0;
        unsigned int right = sqrt(c);
        while (left <= right) {
            unsigned int sum = left * left + right * right;
            if (sum == c)
                return true;
            else if (sum > c)
                --right;
            else
                ++left;
        }
        return false;
    }
};
