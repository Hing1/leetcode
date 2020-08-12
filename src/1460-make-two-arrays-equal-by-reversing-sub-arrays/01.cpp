/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 11 18:10:55 2020
 ************************************************************************/

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); ++i) {
            if (target[i] != arr[i])
                return false;
        }
        return true;
    }
};
