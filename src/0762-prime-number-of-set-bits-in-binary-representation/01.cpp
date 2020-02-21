/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 20 22:34:37 2020
 ************************************************************************/

class Solution {
public:
    int setBit(int n) {
        int count = 0;
        while (n) {
            if (n % 2)
                ++count;
            n /= 2;
        }
        return count;
    }
    bool isPrime(int n) {
        if (n == 1)
            return false;
        bool flag = true;
        for(int i = 2; i <= n / 2; ++i) {
            if(n % i == 0) {
                flag = false;
                break;
            }
        }
        return flag;
    }
    int countPrimeSetBits(int L, int R) {
        int count = 0;
        for (int i = L; i <= R; ++i) {
            int temp = setBit(i);
            if (isPrime(temp))
                ++count;
        }
        return count;
    }
};
