/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Jun  1 09:28:26 2020
 ************************************************************************/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        vector<int> bullet(131072, 0);
        for (int i = 0; i < A.size(); ++i) {
            if(!bullet[A[i]])
                ++bullet[A[i]];
            else
                return A[i];
        }
        return -1;
    }
};
