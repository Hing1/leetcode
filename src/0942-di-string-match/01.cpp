/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Wed Jan  8 19:48:18 2020
 ************************************************************************/

class Solution {
public:
#if 1
    vector<int> diStringMatch(string S) {
        int len = S.size();
        vector<int> vi;
        vi.reserve(len + 1);
        for (int i = 0, begin = 0, end = len; i <= len; ++i) {
            if (S[i] == 'I') {
                vi.push_back(begin++);
            } else {
                vi.push_back(end--);
            }
        }
        return vi;
    }
#else
    vector<int> diStringMatch(string S) {
        int len = S.size();
        vector<int> ans(len + 1, 0);
        int inidx = len;
        for (int i = len - 1, deidx = len; i >= 0; --i) {
            if (S[i] == 'I') {
                ans[i] = ans[inidx] - 1;
                inidx = i;
            } else {
                ans[i] = ans[deidx] + 1;
                deidx = i;
            }
        }
        int minNum = ans[inidx];
        for (int i = 0; i <= len; ++i) {
            ans[i] -= minNum;
        }
        return ans;
    }
#endif
};
