/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Aug 20 15:37:03 2020
 ************************************************************************/

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        auto myCmp = [&] (const int &a, const int &b) {
            return abs(a) < abs(b);
        };
        sort(A.begin(), A.end(), myCmp);
        int ans = 0;
        for (int i = A.size() - 1; i >= 0; --i) {
            if (A[i] < 0 && K) {
                A[i] = -A[i];
                --K;
            }
            ans += A[i];
        }
        if (K % 2) {
            ans -= 2 * A[0];
        }
        return ans;
    }
};
