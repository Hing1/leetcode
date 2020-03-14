/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Mar 14 23:22:18 2020
 ************************************************************************/

class Solution {
    bool isGoodNumb(int n) {
        bool flag = false;
        while (n) {
            int temp = n % 10;
            if (temp == 3 || temp == 4 || temp == 7) {
                return false;
            } else if (temp == 2 || temp == 5 || temp == 6 || temp == 9)
                flag = true;
            n = n / 10;
        }
        return flag;
    }
public:
    int rotatedDigits(int N) {
        int count = 0;
        for (int i = 1; i <= N; ++i) {
            if (isGoodNumb(i))
                ++count;
        }
        return count;
    }
};
