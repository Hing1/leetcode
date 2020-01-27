/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Mon Jan 27 11:58:56 2020
 ************************************************************************/

class Solution {
public:
    int balancedStringSplit(string s) {
        int flag = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'R')
                ++flag;
            else
                --flag;
            if (flag == 0)
                ++ans;
        }
        return ans;
    }
};
