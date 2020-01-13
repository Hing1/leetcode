/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Mon Jan 13 14:44:40 2020
 ************************************************************************/

class Solution {
public:
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
};
