/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Feb 25 23:07:57 2020
 ************************************************************************/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len = s.size();
        if (len != t.size())
            return false;
        vector<int> sABC(128, -1);
        vector<int> sArr(len, -1);
        for (int i = 0, count = 0; i < len; ++i) {
            int temp = s[i] - ' ';
            if (sABC[temp] == -1) {
                sABC[temp] = count;
                ++count;
            }
            sArr[i] = sABC[temp];
        }
        vector<int> tABC(128, -1);
        for (int i = 0, count = 0; i < len; ++i) {
            int temp = t[i] - ' ';
            if (tABC[temp] == -1) {
                tABC[temp] = count;
                ++count;
            }
            if (sArr[i] != tABC[temp])
                return false;
        }
        return true;
    }
};
