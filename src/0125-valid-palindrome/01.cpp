/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# Mail: hing123@126.com
# Created Time: Thu Feb 20 23:13:32 2020
 ************************************************************************/

class Solution {
public:
    string removePunctuation(string s) {
        string temp = "";
        int dif = 'A' - 'a';
        for(int i = 0; i < s.size(); ++i) {
            if (('0' <= s[i] && s[i] <= '9')
             || ('a' <= s[i] && s[i] <= 'z')) {
                 temp += s[i];
            } else if ('A' <= s[i] && s[i] <= 'Z') {
                temp += s[i] - dif;
            }
        }
        return temp;
    }
    bool isPalindrome(string s) {
        string temp = removePunctuation(s);
        for (int i = 0; i <= temp.size() / 2; ++i) {
            if (temp[i] != temp[temp.size() - 1 - i])
                return false;
        }
        return true;
    }
};
