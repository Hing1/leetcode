/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Mar  5 11:29:37 2020
 ************************************************************************/

class Solution {
public:
    int findLUSlength(string a, string b) {
        return (a == b) ? -1 : max (a.size(), b.size());
    }
};
