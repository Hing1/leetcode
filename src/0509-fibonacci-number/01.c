/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Fri Dec 20 19:27:51 2019
 ************************************************************************/


int fib(int N){
    if(N == 0 || N == 1)
        return N;
    else
        return fib(N - 1) + fib(N - 2);
}
