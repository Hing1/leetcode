/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue 15 Sep 2020 03:01:04 PM CST
 ************************************************************************/

class Solution {
public:
    int calculate(string s) {
        int x = 1, y = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'A') {
                x = 2 * x + y;
            } else {
                y = 2 * y + x;
            }
        }
        return x + y;
    }
};
