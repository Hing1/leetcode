/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Apr  2 23:35:26 2020
 ************************************************************************/

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> vi(board);
        for (int i = 0; i < vi.size(); ++i) {
            for (int j = 0; j < vi[0].size(); ++j) {
                int count = 0;
                if (i - 1 >= 0) {
                    if (j - 1 >= 0 && vi[i - 1][j - 1])
                        ++count;
                    if (vi[i - 1][j])
                        ++count;
                    if (j + 1 < vi[0].size() && vi[i - 1][j + 1])
                        ++count;
                }
                if (j - 1 >= 0 && vi[i][j - 1])
                    ++count;
                if (j + 1 < vi[0].size() && vi[i][j + 1])
                    ++count;
                if (i + 1 < vi.size()) {
                    if (j - 1 >= 0 && vi[i + 1][j - 1])
                        ++count;
                    if (vi[i + 1][j])
                        ++count;
                    if (j + 1 < vi[0].size() && vi[i + 1][j + 1])
                        ++count;
                }
                if (vi[i][j]) {
                    if (count != 2 && count != 3)
                        board[i][j] = 0;
                } else {
                    if (count == 3)
                        board[i][j] = 1;
                }
            }
        }
    }
};
