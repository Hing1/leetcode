/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Wed Jan  8 19:48:18 2020
 ************************************************************************/

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> vi;
        int begin = 0;
        int end = S.size();
        for (int i = 0; i <= S.size(); ++i) {
            if (S[i] == 'I') {
                vi.push_back(begin++);
            } else {
                vi.push_back(end--);
            }
        }
        return vi;
    }
};
