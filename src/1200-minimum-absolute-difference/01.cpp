/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Jun  2 23:25:30 2020
 ************************************************************************/

class Solution {
public
    vectorvectorint minimumAbsDifference(vectorint& arr) {
        sort(arr.begin(), arr.end());
        int len = arr.size();
        vectorint sub(len - 1, -1);
        int minABS = INT_MAX;
        for (int i = 0; i  len - 1; ++i) {
            sub[i] = arr[i + 1] - arr[i];
            if (sub[i]  minABS)
                minABS = sub[i];
        }
        vectorvectorint ans;
        ans.reserve(len - 1);
        for (int i = 0; i  len - 1; ++i) {
            if (sub[i] == minABS) {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }
        return ans;
    }
};
