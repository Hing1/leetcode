/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Mar 30 23:25:13 2020
 ************************************************************************/

class Solution {
    int fun(int n, int m) {
        if (n == 1)
            return 0;
        return (m + fun(n - 1, m)) % n;
    }
public:
    int lastRemaining(int n, int m) {
        return fun(n, m);
    }
};
