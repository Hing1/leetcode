/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 23:15:24 2020
 ************************************************************************/

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> bucket(128, 0);
        for (int i = 0; i < s.size(); ++i) {
            int temp = s[i] - ' ';
            ++bucket[temp];
        }
        bool hasCenter = false;
        int ans = 0;
        for (int i = 0; i < 128; ++i) {
            if (bucket[i] % 2) {
                if (hasCenter)
                	--ans;
                hasCenter = true;
            }
            ans += bucket[i];
        }
        return ans;
    }
};
