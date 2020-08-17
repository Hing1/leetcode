/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar  4 13:44:53 2020
 ************************************************************************/

class Solution {
	string reverseWord(string s) {
        string rev = s;
        int len = s.size();
        for (int i = 0; i < len; ++i) {
            rev[i] = s[len - i - 1];
        }
        return rev;
    }
public:
    string reverseWords(string s) {
        string ans;
        ans.reserve(1024);
        string word;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                ans += reverseWord(word);
                ans += ' ';
                word = "";
            } else {
                word += s[i];
            }
        }
        ans += reverseWord(word);
        return ans;
    }
};
