/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Sun Jan 12 15:16:24 2020
 ************************************************************************/

/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> vi;
        vector<int> temp;
        int i = 1, j = 1;
        while (1) {
            if (customfunction.f(i, j) < z) {
                ++j;
            } else {
                if (customfunction.f(i, j) == z) {
                    temp.push_back(i);
                    temp.push_back(j);
                    vi.push_back(temp);
                    temp.clear();
                }
                ++i;
                j = 1;
                if (customfunction.f(i, j) > z)
                    break;
            }
        }
        return vi;
    }
};
