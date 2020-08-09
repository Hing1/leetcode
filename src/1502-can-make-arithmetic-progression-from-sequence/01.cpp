/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Aug  9 16:33:40 2020
 ************************************************************************/

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int dif = arr[1] - arr[0];
        for (int i = 1; i < arr.size() - 1; ++i) {
            if (arr[i + 1] - arr[i] != dif)
                return false;
        }
        return true;
    }
};
