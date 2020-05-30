/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Fri Dec 20 19:27:51 2019
 ************************************************************************/


class Solution {
public:
    int fib(int N) {
        return (N == 0 || N == 1) ? N : fib(N - 1) + fib(N - 2);
    }
};
