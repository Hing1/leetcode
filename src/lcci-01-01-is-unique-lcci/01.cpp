/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 03:33:52 2020
 ************************************************************************/

class Solution {
public:
    bool isUnique(string astr) {
        vector<int> bucket(256, 0);
        for (int i = 0; i < astr.size(); ++i) {
            ++bucket[astr[i] - ' '];
            if (bucket[astr[i] - ' '] >= 2)
                return false;
        }
        return true;
    }
};
