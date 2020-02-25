/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Feb 25 22:19:39 2020
 ************************************************************************/

class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int countPrimes(int n) {
        int count = 0;
        if (n <= 2)
            return count;
        for (int i = 2; i < n; ++i) {
            if (isPrime(i))
                ++count;
        }
        return count;
    }
};
