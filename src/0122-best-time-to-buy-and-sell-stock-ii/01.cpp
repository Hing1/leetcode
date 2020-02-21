/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Feb 21 09:40:09 2020
 ************************************************************************/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1)
            return 0;
        vector<int> vi;
        vi.reserve(prices.size() - 1);
        for (int i = 0; i < prices.size() - 1; ++i) {
            vi.push_back(prices[i + 1] - prices[i]);
        }
        int ans = 0;
        for (int i = 0; i < vi.size(); ++i) {
            if (vi[i] > 0)
                ans += vi[i];
        }
        return ans;
    }
};
