/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Aug  9 16:56:04 2020
 ************************************************************************/

class Solution {
public:
    string removeOuterParentheses(string S) {
        int flag = 0;
        int len = S.size();
        string ans;
        ans.reserve(len);
        for (int i = 0; i < len; ++i) {
            int temp = (S[i] == '(');
            if (temp)
                ++flag;
            else
                --flag;
            if (flag > temp)
                ans += S[i];
        }
        return ans;
    }
};
