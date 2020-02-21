/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Fri Dec 20 19:27:51 2019
 ************************************************************************/

int repeatedNTimes(int* A, int ASize){
    int num[10000];
    int counts = 0;
    
    num[0] = A[0];
    counts++;
    
    for(int i = 1; i < ASize; i++) {
        int j;
        for(j = 0;j < counts;j++) {
            if(A[i] == num[j])
                return A[i];
        }
        num[j] = A[i];
        counts++;
    }
    return -1;
}

