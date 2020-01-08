/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Wed Jan  8 19:37:02 2020
 ************************************************************************/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> vi;

        for (int i = 0; i < A.size(); ++i) {
            vi.push_back(A[i] * A[i]);
        }
        sort(vi.begin(), vi.end());
        return vi;
    }
};
