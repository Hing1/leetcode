/*************************************************************************
# File Name: 03.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat May 30 22:22:09 2020
 ************************************************************************/

class Solution {
public:
	int fib(int N) {
        if (N <= 1)
            return N;
		vector<int> dp(N + 1, 0);
		dp[1] = dp[2] = 1;
		for (int i = 3; i <= N; ++i) {
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		return dp[N];
	}
};

