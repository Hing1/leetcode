/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 23:48:23 2020
 ************************************************************************/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        while (i >= 0 && j >= 0) {
            int a = num1[i] - '0';
            int b = num2[j] - '0';
            int temp = a + b + carry;
            carry = 0;
            if (temp >= 10) {
                carry = temp / 10;
            }
            ans += temp % 10 + '0';
            --i;
            --j;
        }
        while (i >= 0) {
            int a = num1[i] - '0';
            int temp = a + carry;
            carry = 0;
            if (temp >= 10) {
                carry = temp / 10;
            }
            ans += temp % 10 + '0';
            --i;
        }
        while (j >= 0) {
            int b = num2[j] - '0';
            int temp = b + carry;
            carry = 0;
            if (temp >= 10) {
                carry = temp / 10;
            }
            ans += temp % 10 + '0';
            --j;
        }
        if (carry) {
            ans += carry + '0';
        }
        string rev;
        for (int i = ans.size() - 1; i >= 0; --i) {
            rev += ans[i];
        }
        return rev;
    }
};
