/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar 11 21:38:15 2020
 ************************************************************************/

class Solution {
public:
    string generateTheString(int n) {
        string ans (n, 'a');
        ans[0] = (n % 2) ? 'a' : 'b';
        return ans;
    }
};
