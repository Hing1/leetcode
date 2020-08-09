/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri May 15 22:17:27 2020
 ************************************************************************/

class Solution {
public:
#if 0
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        int maxValue = arr[len - 1];
        vector<int> ans(len, -1);
        for (int i = len - 2; i >= 0; --i) {
            ans[i] = maxValue;
            if (arr[i] > maxValue)
                maxValue = arr[i];
        }
        return ans;
    }
#else
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        int rightMax = arr[len - 1];
        arr[len - 1] = -1;
        for (int i = arr.size() - 2; i >= 0; --i) {
            int temp = arr[i];
            arr[i] = rightMax;
            if (temp > rightMax)
                rightMax = temp;
        }
        return arr;
    }
#endif
};
