/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed May 13 20:33:21 2020
 ************************************************************************/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int len = candies.size();
        ans.reserve(len);
        int maxCandy = candies[0];
        for (int i = 1; i < len; ++i) {
            if (candies[i] > maxCandy)
                maxCandy = candies[i];
        }
        maxCandy = maxCandy - extraCandies;
        for (int i = 0; i < len; ++i) {
            if (candies[i] >= maxCandy)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
