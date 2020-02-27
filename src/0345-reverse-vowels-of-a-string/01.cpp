/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 17:07:14 2020
 ************************************************************************/

class Solution {
public:
    bool isVowel(char c) {
        return ((c == 'a') || (c == 'A')
             || (c == 'e') || (c == 'E')
             || (c == 'i') || (c == 'I')
             || (c == 'o') || (c == 'O')
             || (c == 'u') || (c == 'U'));
    }
    string reverseVowels(string s) {
        string vowelsStr;
        int lenStr = s.size();
        int lenVow = 0;
        for (int i = 0; i < lenStr; ++i) {
            if (isVowel(s[i])) {
                vowelsStr += s[i];
                ++lenVow;
            }
        }
        for (int i = 0, j = lenVow - 1; i < lenStr; ++i) {
            if (isVowel(s[i])) {
                s[i] = vowelsStr[j];
                --j;
            }
        }
        return s;
    }
};
