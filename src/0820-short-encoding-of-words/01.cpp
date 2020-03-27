/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Mar 28 00:50:03 2020
 ************************************************************************/

class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        int N = words.size();
        vector<string> reversed_words;
        reversed_words.reserve(N);
        for (auto &word : words) {
            reverse(word.begin(), word.end());
            reversed_words.push_back(word);
        }  
        sort(reversed_words.begin(), reversed_words.end());
        int ans = 0;
        for (int i = 0; i < N; ++i) {
            if (!(i + 1 < N && reversed_words[i + 1].find(reversed_words[i]) == 0)) {
                ans += reversed_words[i].size() + 1;
            }
        }
        return ans;
    }
};

