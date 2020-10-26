/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Oct 19 00:13:28 2020
 ************************************************************************/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> ss;
        stack<char> st;
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] == '#') {
                if (!ss.empty())
                    ss.pop();
            } else {
                ss.push(S[i]);
            }
        }
        for (int i = 0; i < T.size(); ++i) {
            if (T[i] == '#') {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(T[i]);
            }
        }
        while (!ss.empty() && !st.empty()) {
            if (ss.top() != st.top())
                return false;
            ss.pop();
            st.pop();
        }
        return ss.empty() && st.empty();
    }
};
