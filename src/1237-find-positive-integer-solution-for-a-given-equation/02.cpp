/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 19:49:50 2020
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
        vector<vector<int>> ans;
        int right = 1000;
        for(int i = 1; i <= 1000; ++i) {
            int left = 1;
            while(left <= right) {
                int mid = left + (right - left) / 2;
                int temp = customfunction.f(i, mid);
                if(temp < z) {
                    left = mid + 1;
                } else if (temp > z) {
                    right = mid - 1;
                } else {
                    ans.push_back({i, mid});
                    right = mid - 1;
                    break;
                }
            }
        }
        return ans;
    }
};

