/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 16:32:10 2020
 ************************************************************************/

class Solution {
    bool isSelfDividing(int n) {
        int bits = n;
        while (bits) {
            if (!(bits % 10) || n % (bits % 10))
                return false;
            bits /= 10;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        ans.reserve(right - left);
        for (int i = left; i <= right; ++i) {
            if (isSelfDividi(i))
                ans.push_back(i);
        }
        return ans;
    }
};
