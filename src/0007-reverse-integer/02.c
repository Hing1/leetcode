/*************************************************************************
# File Name: 02.c
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar  6 17:30:28 2020
 ************************************************************************/

int reverse(int x){
    int isNeg = 0;
    if (x < 0) {
        ++isNeg;
        if (x == -2147483648)
            return 0;
        x = -x;
    }
    int rev = 0;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        if (rev > 214748364 || (rev == 214748364 && pop > 7)) 
            return 0;
        rev = rev * 10 + pop;
    }
    if (isNeg)
        return -rev;
    return rev;
}
