/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Mar 15 11:02:42 2020
 ************************************************************************/

class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.size() > 1) {
            char temp = s.back();
            s.pop_back();
            reverseString(s);
            s.insert(s.begin(), temp);
        }
    }
};
