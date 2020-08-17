/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar  3 17:36:02 2020
 ************************************************************************/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> bucket(64, -1);
        vector<string> letters = {"qwertyuiopQWERTYUIOP", "asdfghjklASDFGHJKL", "zxcvbnmZXCVBNM"};
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < letters[i].size(); ++j) {
                bucket[letters[i][j] - 'A'] = i;
            }
        }
        vector<string> ans;
        ans.reserve(256);
        for (int i = 0; i < words.size(); ++i) {
            bool flag = true;
            for (int j = 1; j < words[i].size(); ++j) {
                if (bucket[words[i][j - 1] - 'A'] != bucket[words[i][j] - 'A']) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans.push_back(words[i]);
        }
        return ans;
    }
};
