/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Aug  7 15:21:20 2020
 ************************************************************************/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans(s);
        for (int i = 0; i < indices.size(); ++i) {
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};
