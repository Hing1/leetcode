/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar 11 16:41:14 2020
 ************************************************************************/

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int len = A.size();
        if (len < 3)
            return false;
        long int sum = 0;
        for (int k = 0; k < len; ++k) {
            sum += A[k];
        }
        if (sum % 3)
            return false;
        sum /= 3;
        int part_sum = 0;
        int i = -1;
        for (int k = 0; k < len - 2; ++k) {
            part_sum += A[k];
            if (part_sum == sum) {
                i = k;
                break;
            }
        }
        if (i == -1)
            return false;
        int j = -1;
        part_sum = 0;
        for (int k = i + 1; k < len - 1; ++k) {
            part_sum += A[k];
            if (part_sum == sum) {
                j = k + 1;
                break;
            }
        }
        if (j == -1)
            return false;
        part_sum = 0;
        for (int k = j; k < len; ++k) {
            part_sum += A[k];
        }
        return (part_sum == sum);
    }
};
