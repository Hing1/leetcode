/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Jun  4 16:49:13 2020
 ************************************************************************/

class Solution {
    bool isNoZero(int n) {
        if (n == 0)
            return false;
        if (n < 10)
            return true;
        if (n % 10 == 0)
            return false;
        else
            return isNoZero(n / 10);
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> temp = {-1, -1};
        for (int i = 1; i <= n / 2; ++i) {
            if (isNoZero(i) && isNoZero(n - i)) {
                temp[0] = i;
                temp[1] = n - i;
                break;
            }
        }
        return temp;
    }
};
