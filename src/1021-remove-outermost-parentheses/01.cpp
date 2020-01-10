/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Fri Jan 10 11:09:48 2020
 ************************************************************************/

class Solution {
public:
    string list_to_string(list<char> lc) {
        string ans = "";
        while(!lc.empty()) {
            ans += lc.front();
            lc.pop_front();
        }
        return ans;
    }
    
    string removeOuterParentheses(string S) {
        list<char> lc;
        stack<char> stk;
        string ans = "";
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] == ')') {
                stk.pop();
                if (stk.empty()) {
                    lc.pop_front();
                    ans += list_to_string(lc);
                    lc.clear();
                }
                else
                    lc.push_back(S[i]);
            } else {
                stk.push(S[i]);
                lc.push_back(S[i]);
            }
        }
        return ans;
    }
};
