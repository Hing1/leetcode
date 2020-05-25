/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon May 25 11:18:05 2020
 ************************************************************************/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        vector<int> bucket(128, 0);
        for (int i = 0; i < S.size(); ++i) {
            ++bucket[S[i] - ' '];
        }
        int ans = 0;
        for (int i = 0; i < J.size(); ++i) {
            ans += bucket[J[i] - ' '];
        }
        return ans;
    }
};
