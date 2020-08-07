/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Aug  5 22:32:18 2020
 ************************************************************************/

class Solution {
public:
    int minCount(vector<int>& coins) {
        int ans = 0;
        for (int i = 0; i < coins.size(); ++i) {
            ans += coins[i] / 2 + coins[i] % 2;
        }
        return ans;
    }
};
