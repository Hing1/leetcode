/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Sun Jan  5 20:15:11 2020
 ************************************************************************/
class Solution {
public:
    string defangIPaddr(string address) {
        string s = address;
        for (int i = 0, count = 0; i < address.size(); ++i) {
            if (address.at(i) == '.') {
                s.insert(i + count * 2, "[");
                s.insert(i + 2 + count * 2, "]");
                ++count;
            }
        }
        return s;
    }
};

