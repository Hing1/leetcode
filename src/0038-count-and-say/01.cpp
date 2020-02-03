/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# Mail: hing123@126.com
# Created Time: Mon Feb  3 10:37:11 2020
 ************************************************************************/

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string str = countAndSay(n - 1);
        string ans = "";
        int dif = '1' - 1;
        for (int i = 0; i < str.size(); ++i) {
            char temp = str[i];
            int count = 1;
            while (str[i + 1] == temp) {
                ++count;
                ++i;
            }
            ans += count + dif;
            ans += temp;
        }
        return ans;
    }
};
