/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Sep 10 15:54:12 2020
 ************************************************************************/

class Solution {
    int countBits(int n) {
        int ans = 0;
        while (n) {
            ans += n % 2;
            n /= 2;
        }
        return ans;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto myCmp = [&] (const int a, const int b) {
            int bita = countBits(a);
            int bitb = countBits(b);
            if (bita != bitb)
                return countBits(a) < countBits(b);
            else
                return a < b;
        };
        sort(arr.begin(), arr.end(), myCmp);
        return arr;
    }
};
