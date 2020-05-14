/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu May 14 00:13:00 2020
 ************************************************************************/

class Solution {
    vector<int> eachBit(int n) {
        vector<int> vi;
        vi.reserve(5);
        while (n) {
            vi.push_back(n % 10);
            n /= 10;
        }
        return vi;
    }
public:
    int subtractProductAndSum(int n) {
        vector<int> bits = eachBit(n);
        int pro = 1;
        int sum = 0;
        for (int i = 0; i < bits.size(); ++i) {
            pro *= bits[i];
            sum += bits[i];
        }
        return pro - sum;
    }
};
