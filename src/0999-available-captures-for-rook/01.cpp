/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar  6 17:48:49 2020
 ************************************************************************/

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        int ans = 0;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (board[i][j] == 'R') {
                    if (i + 1 < row) {
                        for (int i1 = i + 1; i1 < row; ++i1) {
                            if (board[i1][j] == 'p')
                                ++ans;
                            if (board[i1][j] != '.')
                                break;
                        }
                    }
                    if (j + 1 < col) {
                        for (int j1 = j + 1; j1 < col; ++j1) {
                            if (board[i][j1] == 'p')
                                ++ans;
                            if (board[i][j1] != '.')
                                break;
                        }
                    }
                    if (i - 1 >= 0) {
                        for (int i1 = i - 1; i1 >= 0; --i1) {
                            if (board[i1][j] == 'p')
                                ++ans;
                            if (board[i1][j] != '.')
                                break;
                        }
                    }
                    if (j - 1 >= 0) {
                        for (int j1 = j - 1; j1 >= 0; --j1) {
                            if (board[i][j1] == 'p')
                                ++ans;
                            if (board[i][j1] != '.')
                                break;
                        }
                    }
                    break;
                }
            }
        }
        return ans;
    }
};
