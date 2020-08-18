/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 15:05:31 2020
 ************************************************************************/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> bucketChars(26, 0);
        for (int i = 0; i < chars.size(); ++i) {
            ++bucketChars[chars[i] - 'a'];
        }
        int ans = 0;
        for (int i = 0; i < words.size(); ++i) {
            int len = words[i].size();
            vector<int> bucketWord(26, 0);
            for (int j = 0; j < len; ++j) {
                ++bucketWord[words[i][j] - 'a'];
            }
            bool flag = true;
            for (int j = 0; j < 26; ++j) {
                if (bucketWord[j] > bucketChars[j])
                    flag = false;
            }
            if (flag)
                ans += len;
        }
        return ans;
    }
};
