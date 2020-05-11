/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat May  9 09:28:48 2020
 ************************************************************************/

class Solution {
public:
    bool isPalindrome(int x){
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return (rev == x || rev / 10 == x);
    }
};
