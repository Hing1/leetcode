/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 13:46:31 2020
 ************************************************************************/

int hammingDistance(int x, int y) {
    int a[32] = {0};
    int b[32] = {0};
    int na = 0,nb = 0;
    int i,num = 0;
    
    while(x > 0){
        a[na] = x % 2;
        x = x / 2;
        na++;
    }
    while(y > 0){
        b[nb] = y % 2;
        y = y / 2;
        nb++;
    }
    
    for(i = 0;i < 32;i++)
        if(a[i] != b[i])
            num++;
    return num;
}

