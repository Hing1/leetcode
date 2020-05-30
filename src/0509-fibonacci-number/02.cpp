/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat May 30 22:14:40 2020
 ************************************************************************/

class Solution {
	int helper(vector<int> &memory, int n) {
		if (n == 1 || n == 2)
			return 1;
		if (memory[n] != 0)
			return memory[n];
		memory[n] = helper(memory, n - 1) + helper(memory, n - 2);
		return memory[n];
	}
public:
	int fib(int N) {
		if (N < 1)
			return 0;
		vector<int> memory(N + 1, 0);
		return helper(memory, N);
	}
};
