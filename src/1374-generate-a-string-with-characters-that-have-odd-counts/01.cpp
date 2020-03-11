/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar 11 21:38:15 2020
 ************************************************************************/

class Solution {
public:
    string generateTheString(int n) {
        if (n <= 0)
            return "b";
        string ans (n - 1, 'a');
        ans += (n % 2) ? 'a' : 'b';
        return ans;
    }
};
