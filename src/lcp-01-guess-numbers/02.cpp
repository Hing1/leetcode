/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu May 14 00:06:10 2020
 ************************************************************************/

class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int count = 0;
        for (int i = 0; i < guess.size(); ++i) {
            if (guess[i] == answer[i])
                ++count;
        }
        return count;
    }
};
