/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Sep  5 09:42:49 2020
 ************************************************************************/

class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            int temp = 0;
            while (num) {
                temp += num % 10;
                num /= 10;
            }
            num = temp;
        }
        return num;
    }
};
