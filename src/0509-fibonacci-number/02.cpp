/*************************************************************************
# File Name: 02.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Fri Dec 20 19:27:51 2019
 ************************************************************************/


class Solution {
public:
    int fib(int N) {
        if(N == 0 || N == 1)
            return N;
        else
            return fib(N - 1) + fib(N - 2);
    }
};
