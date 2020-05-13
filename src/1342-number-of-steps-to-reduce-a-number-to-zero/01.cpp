/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed May 13 23:15:30 2020
 ************************************************************************/

class Solution {
public:
    int numberOfSteps (int num) {
        int count = 0;
        while (num) {
            ++count;
            if (num % 2 == 0)
                num /= 2;
            else
                num -= 1;
        }
        return count;
    }
};
