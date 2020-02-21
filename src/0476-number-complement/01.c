/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 13:49:03 2020
 ************************************************************************/

int findComplement(int num) {
    if(num == 0)
        return 1;
    else{
        int a[50000] = {0};
        int i, j, com = 0;
        i = 0;
        while(num > 0){
            a[i] = num % 2;
            num = num / 2;
            i++;
        }
        for (int k = 0; k < i; ++k) {
            if(a[k] == 1)
                a[k] = 0;
            else
                a[k] = 1;
        }
        for (j = i - 1; j >= 0; j--) {
            com = com * 2 + a[j];
        }
        return com;
    }
}

