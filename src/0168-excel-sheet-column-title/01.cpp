/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Feb 21 10:33:52 2020
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
    string convertToTitle(int n) {
        if (n < 1)
            return "";
        string s;
        while (n) {
            int temp = (n - 1) % 26;
            s += 'A' +  temp;
            n = (n - 1) / 26;
        }
        string ans = revString(s);
        return ans;
    }
};
