/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 20:42:31 2020
 ************************************************************************/

class Solution {
public:
    string toLowerCase(string str) {
        int dif = 'a' - 'A';
        for (int i = 0; i < str.size(); ++i) {
            if ('A' <= str[i] && str[i] <= 'Z')
                str[i] += dif;
        }
        return str;
    }
};
