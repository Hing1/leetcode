/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# Mail: hing123@126.com
# Created Time: Fri Feb 21 09:36:25 2020
 ************************************************************************/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int temp = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (temp > 0)
                temp += nums[i];
            else
                temp = nums[i];
            ans = max(ans, temp);
        }
        return ans;
    }
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1)
            return 0;
        vector<int> vi;
        vi.reserve(prices.size() - 1);
        for (int i = 0; i < prices.size() - 1; ++i) {
            vi.push_back(prices[i + 1] - prices[i]);
        }
        int temp = maxSubArray(vi);
        if (temp < 0)
            return 0;
        else
            return temp;
    }
};
