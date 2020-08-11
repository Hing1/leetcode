/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan 27 12:06:08 2020
 ************************************************************************/

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n, 0);
        for (int i = 0; i < n / 2; ++i) {
            ans[i] = i + 1;
            ans[i + n / 2] = -i - 1;
        }
        return ans;
    }
};
