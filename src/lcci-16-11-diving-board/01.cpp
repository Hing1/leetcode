/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Jul  8 16:54:22 2020
 ************************************************************************/

class Solution {
public:
    vector<int> divingBoard(int shorter, int longer, int k) {
        vector<int> ans;
        if (k) {
            int base = shorter * k;
            int dif = longer - shorter;
            if (dif == 0) {
                ans.push_back(base);
                return ans;
            }
            ans.reserve(k + 1);
            for (int i = 0; i <= k; ++i) {
                ans.push_back(dif * i + base);
            }
        }
        return ans;
    }
};
