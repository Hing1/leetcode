/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar  4 13:44:53 2020
 ************************************************************************/

class Solution {
public:
    string revString(string s) {
        string ans;
        for (int i = s.size() - 1; i >= 0; --i) {
            ans += s[i];
        }
        return ans;
    }
    string reverseWords(string s) {
        string ans;
        string word;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                ans += revString(word);
                ans += ' ';
                word = "";
            } else {
                word += s[i];
            }
        }
        if (word.size() != 0) {
            ans += revString(word);
        }
        return ans;
    }
};
