/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Fri Dec 20 16:40:47 2019
 ************************************************************************/

class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
		stack<char> st;
		for (int i = 0; i < len; ++i) {
			if (s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{') {
				st.push(s.at(i));
			} else if (!st.empty()) {
				char temp = st.top();
                if ((s.at(i) == ')' && temp != '(')
				  ||(s.at(i) == ']' && temp != '[')
				  ||(s.at(i) == '}' && temp != '{'))
				    return false;
                st.pop();
            } else {
                return false;
            }
		}
		return (st.empty());
    }
};
