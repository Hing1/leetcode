/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Feb 21 09:40:09 2020
 ************************************************************************/

class Solution {
public:
    int maxProfit(vector<int>& prices) {   
        int ans = 0;
        for (int i = 1; i < prices.size(); ++i) {
            ans += max(0, prices[i] - prices[i - 1]);
        }
        return ans;
    }
};
