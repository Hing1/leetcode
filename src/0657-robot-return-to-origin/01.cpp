/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun May 17 23:09:02 2020
 ************************************************************************/

class Solution {
public:
    bool judgeCircle(string moves) {
        int row = 0, col = 0;
        for (int i = 0; i < moves.size(); ++i) {
            if (moves[i] == 'R') {
                ++row;
            } else if (moves[i] == 'L') {
                --row;
            } else if (moves[i] == 'D') {
                ++col;
            } else {
                --col;
            }
        }
        return row == 0 && col == 0;
    }
};
