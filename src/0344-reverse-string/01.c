/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan  6 20:16:23 2020
 ************************************************************************/

void reverseString(char* s, int sSize) {
    char temp;
    int n = sSize / 2;
    for(int i = 0;i < n;i++){
        temp = s[i];
        s[i] = s[sSize - 1 - i];
        s[sSize - 1 - i] = temp;
    }
}

