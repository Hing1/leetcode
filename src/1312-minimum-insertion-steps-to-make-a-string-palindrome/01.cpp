/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Sep  1 14:48:00 2020
 ************************************************************************/

class Solution {
public:
    int minInsertions(string s) {
        int len = s.size();
        vector<vector<int>> dp(len, vector<int> (len, 0));
        for (int i = len - 2; i >= 0; --i) {
            for (int j = i + 1; j < len; ++j) {
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j - 1];
                } else {
                    dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
                }
            }
        }
        return dp[0][len - 1];
    }
};
