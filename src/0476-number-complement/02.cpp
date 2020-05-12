/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue May 12 14:14:26 2020
 ************************************************************************/

class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        for (int count = 0; num > 0; ++count) {
            if (num % 2 - 1)
                ans += pow(2, count);
            num /= 2;
        }
        return ans;
    }
};
