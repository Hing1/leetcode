/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Mar 12 14:29:28 2020
 ************************************************************************/

class Solution {
    bool checkIfExistABS(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int len = arr.size();
        if (len >= 2) {
            for (int i = 0, j = 1; j < len; ) {
                int temp = arr[i] * 2;
                if (temp == arr[j])
                    return true;
                if (temp > arr[j]) {
                    ++j;
                } else {
                    if (i + 1 >= j)
                        ++j;
                    ++i;
                }
            }
        }
        return false;
    }
public:
    bool checkIfExist(vector<int>& arr) {
        int len = arr.size();
        vector<int> neg;
        vector<int> pos;
        neg.reserve(len);
        pos.reserve(len);
        for (int i = 0; i < len; ++i) {
            if (arr[i] < 0)
                neg.push_back(-arr[i]);
            else
                pos.push_back(arr[i]);
        }
        return checkIfExistABS(neg) || checkIfExistABS(pos);
    }
};
