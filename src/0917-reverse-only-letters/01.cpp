/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Mar 14 21:04:21 2020
 ************************************************************************/

class Solution {
    bool isLetter(char ch) {
        return (('a' <= ch && ch <= 'z')
             || ('A' <= ch && ch <= 'Z'));
    }
public:
    string reverseOnlyLetters(string S) {
        int len = S.size();
        string word;
        for (int i = 0; i < len; ++i) {
            if (isLetter(S[i]))
                word += S[i];
        }
        string ans;
        for (int i = 0, idx = word.size() - 1; i < len; ++i) {
            ans += (isLetter(S[i])) ? word[idx--] : S[i];
        }
        return ans;
    }
};
