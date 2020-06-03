/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Jun  3 00:22:58 2020
 ************************************************************************/

class Solution {
    int bucket[1001];
    bool myCompare(int a, int b) {
        if (bucket[a] != -1 && bucket[b] != -1) {
            return (bucket[a] > bucket[b]);
        } else if (bucket[a] == -1 && bucket[b] == -1) {
            return (a > b);
        } else if (bucket[a] == -1) {
            return true;
        } else {
            return false;
        }
    }
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        for (int i = 0; i < 1001; ++i) {
            bucket[i] = -1;
        }
        for (int i = 0; i < arr2.size(); ++i) {
            if (bucket[arr2[i]] == -1)
                bucket[arr2[i]] = i;
        }
        int len = arr1.size();
        for (int i = 0; i < len; ++i) {
            for (int j = i + 1; j < len; ++j) {
                if (myCompare(arr1[i], arr1[j])) {
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
        return arr1;
    }
};
