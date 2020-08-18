/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 09:32:42 2020
 ************************************************************************/

class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        map<vector<int>, int> mvi;
        int len = A[0].size();
        for (int i = 0; i < A.size(); ++i) {
            vector<int> buckets(52, 0);
            for (int j = 0; j < len; ++j) {
                if (j % 2)
                    ++buckets[A[i][j] - 'a'];
                else
                    ++buckets[A[i][j] - 'a' + 26];
            }
            ++mvi[buckets];
        }
        return mvi.size();
    }
};
