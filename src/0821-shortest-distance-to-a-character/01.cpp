/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Wed Jan 15 21:44:13 2020
 ************************************************************************/

class Solution {
public:
    int my_distance(string str, char key, int idx) {
        int i = 0;
        while (1) {
            if (idx + i < str.size()) {
                if (str[idx + i] == key)
                    return i;
            }
            if (idx - i >= 0) {
                if (str[idx - i] == key)
                    return i;
            }
            ++i;
        }
    }
    vector<int> shortestToChar(string S, char C) {
        vector<int> vi;
        for (int i = 0; i < S.size(); ++i) {
            vi.push_back(my_distance(S, C, i));
        }
        return vi;
    }
};
