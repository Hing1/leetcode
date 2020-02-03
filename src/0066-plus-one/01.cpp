/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# Mail: hing123@126.com
# Created Time: Mon Feb  3 11:03:29 2020
 ************************************************************************/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int idx = digits.size() - 1;
        do {
            ++digits[idx];
            carry = 0;
            if (digits[idx] < 10)
                return digits;
            else {
                digits[idx] = 0;
                carry = 1;
            }
            --idx;
        }while (carry && idx >= 0);
        if (carry) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
