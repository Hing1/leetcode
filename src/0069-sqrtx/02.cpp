/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug 22 15:45:53 2020
 ************************************************************************/

class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1)
            return x;
        int left = 1;
        int right = x / 2 + 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            unsigned long temp = (unsigned long)mid * mid;
            if (temp == x) {
                return mid;
            } else if (temp < x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left - 1;
    }
};
