/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 19 01:48:02 2020
 ************************************************************************/

class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        bool carry = false;
        int i = a.size() - 1;
        int j = b.size() - 1;
        while (i >= 0 && j >= 0) {
            if (a[i] == '1' && b[j] == '1') {
                if (carry) {
                    ans += '1';
                } else {
                    ans += '0';
                }
                carry = true;
            } else if (a[i] == '1' || b[j] == '1') {
                if (carry) {
                    ans += '0';
                } else {
                    ans += '1';
                }
            } else if (a[i] == '0' && b[j] == '0') {
                if (carry) {
                    ans += '1';
                    carry = false;
                } else {
                    ans += '0';
                }
            }
            --i;
            --j;
        }
        while (i >= 0) {
            if (carry) {
                if (a[i] == '1') {
                    ans += '0';
                } else {
                    ans += '1';
                    carry = false;
                }
            } else {
                ans += a[i];
            }
            --i;
        }
        while (j >= 0) {
            if (carry) {
                if (b[j] == '1') {
                    ans += '0';
                } else {
                    ans += '1';
                    carry = false;
                }
            } else {
                ans += b[j];
            }
            --j;
        }
        if (carry)
            ans += '1';
        string temp;
        for (int k = ans.size() - 1; k >= 0; --k) {
            temp += ans[k];
        } 
        return temp;
    }
};
