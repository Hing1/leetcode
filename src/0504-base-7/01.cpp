/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar  3 17:45:36 2020
 ************************************************************************/

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)
            return "0";
        bool isNeg = false;
        if (num < 0) {
            num = -num;
            isNeg = true;
        }
        string ans;
        while (num) {
            ans += num % 7 + '0';
            num /= 7;
        }
        if (isNeg)
            ans += '-';
        string rev;
        for (int i = ans.size() - 1; i >= 0; --i) {
            rev += ans[i];
        }
        return rev;
    }
};
