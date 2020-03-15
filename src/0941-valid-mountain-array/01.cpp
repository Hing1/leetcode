/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Mar 15 22:03:37 2020
 ************************************************************************/

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int len = A.size();
        int flag = 0;
        if (len >= 3) {
            for (int i = 0; i < len - 1; ++i) {
                if (A[i] == A[i + 1])
                    return false;
                else if (A[i] < A[i + 1]){
                    if (flag == 0)
                        flag = 1;
                    else if (flag == 2)
                        return false;
                } else {
                    if (flag == 0)
                        return false;
                    else if (flag == 1)
                        flag = 2;
                }
            }
        }
        return (flag == 2);
    }
};
