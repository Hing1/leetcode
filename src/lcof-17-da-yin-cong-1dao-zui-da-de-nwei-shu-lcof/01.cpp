/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 17:15:34 2020
 ************************************************************************/

class Solution {
public:
    vector<int> printNumbers(int n) {
        int len = pow(10, n) - 1;
        vector<int> ans(len, 0);
        for (int i = 0; i < len; ++i) {
            ans[i] = i + 1;
        }
        return ans;
    }
};
