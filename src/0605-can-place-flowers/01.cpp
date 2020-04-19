/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Apr 19 21:11:18 2020
 ************************************************************************/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        for (int i = 0; i < len; ++i) {
            if ((flowerbed[i] == 0)
             && (i - 1 < 0 || flowerbed[i - 1] == 0)
             && (i + 1 == len || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                --n;
            }
            if (n <= 0)
                return true;
        }
        return false;
    }
};
