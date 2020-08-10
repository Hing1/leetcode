/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 10 17:53:17 2020
 ************************************************************************/

class Solution {
public:
    int maximum69Number (int num) {
        int rev = 0;
        while (num) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        bool flag = true;
        while (rev) {
            int temp = rev % 10;
            if (temp == 6 && flag) {
                temp = 9;
                flag = false;
            }
            num =  num * 10 + temp;
            rev /= 10;
        }
        return num;
    }
};
