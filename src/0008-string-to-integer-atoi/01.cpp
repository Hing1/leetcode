/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Apr  3 23:44:34 2020
 ************************************************************************/

class Solution {
    int myAtoiStr(bool isNeg, string str) {
        unsigned long int ans = 0;
        for (int i = 0; i < str.size(); ++i) {
            ans = ans * 10 + str[i] - '0';
            if (i >= 10)
                return (isNeg) ? INT_MIN : INT_MAX;
        }
        if (isNeg)
            return (ans > INT_MAX) ? INT_MIN : (-ans);
        else
            return (ans >= INT_MAX) ? INT_MAX : ans;
    }
public:
    int myAtoi(string str) {
        int len = str.size(), i = 0;
        while (i < len && str[i] == ' ')
            ++i;
        
        bool isNeg = false;
        if (i < len && str[i] == '-') {
            isNeg = true;
            ++i;
        } else if (i < len && str[i] == '+')
            ++i;
        
        while (i < len && str[i] == '0')
            ++i;
        
        string numbStr;
        while (i < len && '0' <= str[i] && str[i] <= '9') {
            numbStr += str[i];
            ++i;
        }
        return myAtoiStr(isNeg, numbStr);
    }
};
