/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Jun  4 09:17:07 2020
 ************************************************************************/

class Solution {
public:
    double new21Game(int N, int K, int W) {
        vector<double> dp(K + W + 1, 0.0);
        for (int i = K; i <= N; ++i) {
            dp[i] = 1.0;
        }
        double sum = N - K + 1;
        for (int i = K - 1; i >= 0; --i) {
            dp[i] = sum / double(W);
            sum += dp[i] - dp[i + W];
        }
        return dp[0];
    }
};
