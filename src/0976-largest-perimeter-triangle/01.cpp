/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Mar 14 20:42:54 2020
 ************************************************************************/

class Solution {
    int myLargestPerimeter(vector<int> A) {
        int len = A.size();
        if (A[len - 1] < A[len - 2] + A[len - 3])
            return A[len - 1] + A[len - 2] + A[len - 3];
        if (len == 3) {
            return 0;
        } else {
            A.pop_back();
            return myLargestPerimeter(A);
        }
    }
public:
    int largestPerimeter(vector<int>& A) {
        sort (A.begin(), A.end());
        return myLargestPerimeter(A);
    }
};
