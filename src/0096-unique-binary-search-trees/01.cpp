/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Jul 15 20:59:43 2020
 ************************************************************************/

class Solution {
public:
    int numTrees(int n) {
        long long C = 1;
        for (int i = 0; i < n; ++i) {
            C = C * 2 * (2 * i + 1) / (i + 2);
        }
        return (int)C;
    }
};
