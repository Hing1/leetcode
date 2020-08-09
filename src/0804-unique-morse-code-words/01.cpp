/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 20:56:40 2020
 ************************************************************************/

class Solution {
    string getMorseCode(char ch) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        if ('a' <= ch && ch <= 'z') {
            return morse[ch - 'a'];
        }
        if ('A' <= ch && ch <= 'Z') {
            return morse[ch - 'A'];
        }
        return "";
    }
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string, int> umss;
        for (int i = 0; i < words.size(); ++i) {
            string morse;
            for (int j = 0; j < words[i].size(); ++j) {
                morse += getMorseCode(words[i][j]);
            }
            ++umss[morse];
        }
        return umss.size();
    }
};
