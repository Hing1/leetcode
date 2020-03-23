/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Mar 23 23:57:51 2020
 ************************************************************************/

class Solution {
    
    vector<string> myLetterCasePermutation(string S, int begin, int end) {
        if (begin > end) {
            vector<string> ans = {""};
            return ans;
        }
        vector<string> ans;
        vector<string> pre = myLetterCasePermutation(S, begin, end - 1);
        for (int i = 0; i < pre.size(); ++i) {
            string temp = pre[i];
            if (!('0' <= S[end] && S[end] <= '9')) {
                string temp2 = temp;
                if ('a' <= S[end] && S[end] <= 'z'){
                    temp2 += S[end] + 'A' - 'a';
                } else {
                    temp2 += S[end] + 'a' - 'A';
                }
                ans.push_back(temp2);
            }
            temp += S[end];
            ans.push_back(temp);
        }
        return ans;
    }
public:
    vector<string> letterCasePermutation(string S) {
        return myLetterCasePermutation(S, 0, S.size() - 1);
    }
};
