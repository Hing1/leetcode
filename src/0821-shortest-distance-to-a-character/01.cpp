/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Wed Jan 15 21:44:13 2020
 ************************************************************************/

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int len = S.size();
        vector<int> ans(len, 0);
        int pre = INT_MIN + len + 1;
        for (int i = 0; i < len; ++i) {
            if (S[i] == C)
                pre = i;
            ans[i] = i - pre;
        }
        pre = INT_MAX - len - 1;
        for (int i = len - 1; i >= 0; --i) {
            if (S[i] == C)
                pre = i;
            ans[i] = min(ans[i], pre - i);
        }
        return ans;
    }
};
