/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 10:35:05 2020
 ************************************************************************/

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = 0, emptyBottles = 0;
        while (numBottles) {
            ans += numBottles;
            emptyBottles += numBottles;
            numBottles = emptyBottles / numExchange;
            emptyBottles %= numExchange;
        }
        return ans;
    }
};
