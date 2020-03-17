/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar 17 14:10:01 2020
 ************************************************************************/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charsBucket(26, 0);
        for (int i = 0; i < chars.size(); ++i) {
            ++charsBucket[chars[i] - 'a'];
        }
        int ans = 0;
        for (int i = 0; i < words.size(); ++i) {
            string word = words[i];
            int len = word.size();
            vector<int> wordBucket(26, 0);
            for (int j = 0; j < len; ++j) {
                ++wordBucket[word[j] - 'a'];
            }
            bool flag = true;
            for (int j = 0; j < 26; ++j) {
                if (wordBucket[j] > charsBucket[j]) {
                    flag = false;
                }
            }
            if (flag)
                ans += len;
        }
        return ans;
    }
};
