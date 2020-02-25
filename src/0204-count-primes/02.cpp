/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Feb 25 22:45:49 2020
 ************************************************************************/

class Solution {
public:
    int countPrimes(int n) {
        if (n < 2)
            return 0;
        vector<bool> primeArr(n, true);
        for (int i = 2; i * i < n; ++i) {
            if (primeArr[i]) {
                for (int j = 2; i * j < n; ++j) {
                    primeArr[i * j] = false;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; ++i) {
            if (primeArr[i])
                ++count;
        }
        return count;
    }
};
