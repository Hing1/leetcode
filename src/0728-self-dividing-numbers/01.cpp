/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Tue Jan  7 16:32:10 2020
 ************************************************************************/

class Solution {
public:
    bool isSelfDividi(int n) {
        if (n == 0)
            return false;
        int temp = n;
        vector<int> vi;
        while (temp) {
            if (temp % 10 != 0)
                vi.push_back(temp % 10);
            else
                return false;
            temp = temp / 10;
        }
        for (auto itr = vi.begin(); itr != vi.end(); ++itr) {
            if (n % (*itr) != 0)
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vi;
        if (left > right)
            return vi;
        for (int i = left; i <= right; ++i) {
            if (isSelfDividi(i))
                vi.push_back(i);
        }
        return vi;
    }
};
