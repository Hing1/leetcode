/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Sep  9 23:16:21 2020
 ************************************************************************/

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        map<int, int> mii;
        int len = candies.size();
        for (int i = 0; i < candies.size(); ++i) {
            ++mii[candies[i]];
        }
        if (mii.size() > len / 2)
            return len / 2;
        else
            return mii.size();
    }
};
