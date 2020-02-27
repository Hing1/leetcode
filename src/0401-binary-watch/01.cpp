/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 22:55:40 2020
 ************************************************************************/

class Solution {
public:
    int bitOfN(int n) {
        int count = 0;
        while (n) {
            n = n & (n - 1);
            ++count;
        }
        return count;
    }
    vector<string> readBinaryWatch(int num) {
        vector<string> vs;
        for (int i = 0; i < 12; ++i) {
            for (int j = 0; j < 60; ++j) {
                if (bitOfN(i) + bitOfN(j) == num) {
                    vs.push_back(to_string(i) + ":" + (j < 10 ? "0" : "") + to_string(j));
                }
            }
        }
        return vs;
    }
};
