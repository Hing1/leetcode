/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Apr  1 23:31:48 2020
 ************************************************************************/

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int d = 0;
        int len = seq.size();
        vector<int> ans;
        ans.reserve(len);
        for (int i = 0; i < len; ++i) {
            if (seq[i] == '(') {
                ++d;
                ans.push_back(d % 2);
            } else {
                ans.push_back(d % 2);
                --d;
            }
        }
        return ans;
    }
};
