/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Fri Jan 10 08:48:12 2020
 ************************************************************************/

class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> stk;
        for (int i = S.size() - 1; i >= 0; --i) {
            if (stk.empty() || stk.top() != S[i])
                stk.push(S[i]);
            else
                stk.pop();
        }
        string ans = "";
        while (!stk.empty()) {
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};
