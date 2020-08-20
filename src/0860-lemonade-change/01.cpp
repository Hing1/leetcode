/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Aug 20 17:16:15 2020
 ************************************************************************/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        for (int i = 0, fiv = 0, ten = 0; i < bills.size(); ++i) {
            if (bills[i] == 5) {
                ++fiv;
            } else if (bills[i] == 10) {
                if (fiv < 1)
                    return false;
                ++ten;
                --fiv;
            } else {
                if (ten < 1) {
                    if (fiv < 3)
                        return false;
                    fiv -= 3;
                } else {
                    if (fiv < 1)
                        return false;
                    --fiv;
                    --ten;
                }
            }
        }
        return true;
    }
};
