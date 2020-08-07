/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Aug  5 22:12:31 2020
 ************************************************************************/

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for (int i = 0; i < address.size(); ++i) {
            if (address[i] == '.')
                ans += "[.]";
            else
                ans += address[i];
        }
        return ans;
    }
};
