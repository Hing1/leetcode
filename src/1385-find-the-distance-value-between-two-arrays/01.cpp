/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 04:45:49 2020
 ************************************************************************/

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        for (int i = 0; i < arr1.size(); ++i) {
            bool flag = true;
            for (int j = 0; j < arr2.size(); ++j) {
                if (abs(arr1[i] - arr2[j]) <= d) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ++ans;
        }
        return ans;
    }
};
