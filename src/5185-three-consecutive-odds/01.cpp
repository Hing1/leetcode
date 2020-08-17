/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 02:34:39 2020
 ************************************************************************/

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for (int i = 0, flag = 0; i < arr.size(); ++i) {
            if (arr[i] % 2) {
                ++flag;
                if (flag >= 3)
                    return true;
            } else {
                flag = 0;
            }
        }
        return false;
    }
};
