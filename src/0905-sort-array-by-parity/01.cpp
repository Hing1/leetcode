/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Mar 14 22:27:58 2020
 ************************************************************************/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0, j = A.size() - 1;
        while (i < j) {
            while (i < j && A[i] % 2 == 0) {
                ++i;
            }
            while (i < j && A[j] % 2 == 1) {
                --j;
            }
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
        return A;
    }
};
