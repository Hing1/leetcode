/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar  4 14:11:44 2020
 ************************************************************************/

class Solution {
public:
    string revString(string s) {
        string ans;
        for (int i = s.size() - 1; i >= 0; --i) {
            ans += s[i];
        }
        return ans;
    }
    string reverseStr(string s, int k) {
        string subStr;
        string ans;
        int i = 0;
        for (; i < s.size(); ++i) {
            subStr += s[i];
            if ((i + 1) % k == 0) {
                if ((i + 1) % (2 * k) == 0)
                    ans += subStr;
                else
                    ans += revString(subStr);
                subStr = "";
            }
        }
        if(subStr.size() != 0) {
            ans += ((i / k) % 2) ? subStr : revString(subStr);
        }
        return ans;
    }
};
