/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Mon Jan 27 12:06:08 2020
 ************************************************************************/

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vi;
        for (int i = 1; i <= n / 2; ++i) {
            vi.push_back(i);
            vi.push_back(-i);
        }
        if (n % 2)
            vi.push_back(0);
        return vi;
    }
};
