/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 14:56:05 2020
 ************************************************************************/

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> bucketAns(26, INT_MAX);
        for (int i = 0; i < A.size(); ++i) {
            vector<int> bucket(26, 0);
            for (int j = 0; j < A[i].size(); ++j) {
                ++bucket[A[i][j] - 'a'];
            }
            for (int j = 0; j < 26; ++j) {
                bucketAns[j] = min(bucketAns[j], bucket[j]);
            }
        }
        vector<string> ans;
        ans.reserve(26);
        for (int i = 0; i < 26; ++i) {
            while (bucketAns[i]--) {
                string temp;
                temp += i + 'a';
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
