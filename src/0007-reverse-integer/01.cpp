/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# Mail: hing123@126.com
# Created Time: Thu Jan 30 19:23:14 2020
 ************************************************************************/

class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        queue<int> s;
        while (x) {
            s.push(x % 10);
            x = x / 10;
        }
        while (!s.empty()) {
            ans = ans * 10 + s.front();
            s.pop();
        }
        if (ans < -2147483648 || 2147483647 < ans)
            return 0;
        else
            return ans;
    }
};
