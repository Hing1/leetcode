/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar  4 13:36:00 2020
 ************************************************************************/

class Solution {
public:
    bool checkRecord(string s) {
        bool hasAbsent = false;
        for (int i = 0, lateTimes = 0; i < s.size(); ++i) {
            if (s[i] == 'A') {
                if (hasAbsent)
                    return false;
                hasAbsent = true;
            } else if (s[i] == 'L') {
                if (i == 0 || s[i - 1] == 'L') {
                    ++lateTimes;
                    if (lateTimes >= 3)
                        return false;
                } else {
                    lateTimes = 1;
                }
            }
        }
        return true;
    }
};
