/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon May 11 15:44:00 2020
 ************************************************************************/

class Solution {
    int addBit(int n) {
        int ans = 0;
        while (n) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
public:
    int countLargestGroup(int n) {
        vector<int> group(n, 0);
        for (int i = 1; i <= n; ++i) {
            ++group[addBit(i) - 1];
        }
        vector<int> sameNumbGroup(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            ++sameNumbGroup[group[i]];
        }
        for (int i = n; i >= 0; --i) {
            if (sameNumbGroup[i])
                return sameNumbGroup[i];
        }
        return 1;
    }
};
