/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan 27 13:07:24 2020
 ************************************************************************/

class Solution {
public:
    string freqAlphabets(string s) {
        string re_ans;
        int dif_char = 'a' - '1';
        int dif_int = '1' - 1;
        for (int i = s.size() - 1; i >= 0; --i) {
            if ('0' <= s[i] && s[i] <= '9') {
                re_ans += s[i] + dif_char;
            } else {
                int temp = (s[--i] - dif_int) + (s[--i] - dif_int) * 10;
                re_ans += temp + dif_char + dif_int;
            }
        }
        string ans;
        for (int i = re_ans.size() - 1; i >= 0; --i) {
            ans += re_ans[i];
        }
        return ans;
    }
};
