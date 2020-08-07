/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Aug  5 22:28:23 2020
 ************************************************************************/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul = 1;
        int sum = 0;
        while (n) {
            mul *= n % 10;
            sum += n % 10;
            n /= 10;
        }
        return mul - sum;
    }
};