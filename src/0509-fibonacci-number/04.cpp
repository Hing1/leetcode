/*************************************************************************
# File Name: 04.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat May 30 22:28:11 2020
 ************************************************************************/

class Solution {
public:
	int fib(int N) {
		if (N == 0)
			return N;
		if (N == 1 || N == 2)
			return 1;
		int pre = 1, cur = 1;
		for (int i = 3; i <= N; ++i) {
			int sum = pre + cur;
			pre = cur;
			cur = sum;
		}
		return cur;
	}
};
