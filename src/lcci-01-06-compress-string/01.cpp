/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Mar 16 14:47:50 2020
 ************************************************************************/

class Solution {
public:
    string compressString(string S) {
        int len = S.size();
        if (len <= 1)
            return S;
        char temp = S[0];
        int count = 1;
        string ans;
        ans += temp;
        for (int i = 1; i < S.size(); ++i) {
            if (temp != S[i]) {
                ans += to_string(count);
                ans += S[i];
                count = 1;
                temp = S[i];
            } else {
                ++count;
            }
        }
        if (count)
            ans += to_string(count);
        if (ans.size() >= len)
            return S;
        else
            return ans;
    }
};
