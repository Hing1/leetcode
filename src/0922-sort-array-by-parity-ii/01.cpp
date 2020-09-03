/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan 13 14:44:40 2020
 ************************************************************************/

class Solution {
public:
#if 0
    vector<int> sortArrayByParityII(vector<int>& A) {
        sort(A.begin(), A.end());
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 0) {
                even.push_back(A[i]);
            } else {
                odd.push_back(A[i]);
            }
        }
        vector<int> ans;
        for ( int i = 0; i < odd.size(); ++i) {
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        return ans;
    }
#else
    vector<int> sortArrayByParityII(vector<int>& A) {
        int len = A.size();
        int i = 0, j = len - 1;
        while (i < len && j >= 0) {
            while (i < len && A[i] % 2 == 0) {
                i += 2;
                if (i >= len)
                    return A;
            }
            while (j >= 0 && A[j] % 2 == 1) {
                j -= 2;
                if (j < 0)
                    return A;
            }
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
        return A;
    }
#endif
};
