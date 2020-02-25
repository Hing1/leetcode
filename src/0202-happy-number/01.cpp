/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Feb 25 23:32:02 2020
 ************************************************************************/

class Solution {
public:
    int bitSqureSum(int n) {
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if (n <= 0)
            return false;
        int bitSS = bitSqureSum(n);
        if (bitSS == 1)
            return true;
        vector<int> vi = {n, bitSS};
        int count = 2;
        while (1) {
            int temp = bitSqureSum(vi[count - 1]);
            if (temp == 1) {
                return true;
            } else {
                for (int i = 0; i < count; ++i) {
                    if (temp == vi[i])
                        return false;
                }
                vi.push_back(temp);
                ++count;
            }
        }
    }
};
