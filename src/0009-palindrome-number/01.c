/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 13:30:05 2020
 ************************************************************************/

unsigned int reverse(int n) {
    unsigned int rev = 0;
    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
bool isPalindrome(int x){
    if (x < 0)
        return false;
    unsigned int rev = reverse(x);
    return (rev == x);
}

