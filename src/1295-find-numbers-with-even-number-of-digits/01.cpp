/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 13:57:21 2020
 ************************************************************************/

class Solution {
public:
    bool isEvenDigit(int n) {
        int count = 0;
        while (n) {
            ++count;
            n = n / 10;
        }
        return (count % 2 == 0);
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (isEvenDigit(nums[i]))
                ++count;
        }
        return count;
    }
};

