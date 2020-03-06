/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar  6 17:48:49 2020
 ************************************************************************/

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        vector<int> rock_location = {-1, -1};
        for (int i = 0; i < board.size(); ++i) {
            bool isFound = false;
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == 'R') {
                    rock_location[0] = i;
                    rock_location[1] = j;
                    isFound = true;
                    break;
                }
            }
            if (isFound)
                break;
        }
        int ans = 0;
        for (int i = rock_location[0]; i < board.size(); ++i) {
            if (board[i][rock_location[1]] == 'p') {
                ++ans;
                break;
            } else if (board[i][rock_location[1]] == 'B'){
                break;
            }
        }
        for (int i = rock_location[0]; i >= 0; --i) {
            if (board[i][rock_location[1]] == 'p') {
                ++ans;
                break;
            } else if (board[i][rock_location[1]] == 'B'){
                break;
            }
        }
        for (int j = rock_location[1]; j < board[0].size(); ++j) {
            if (board[rock_location[0]][j] == 'p') {
                ++ans;
                break;
            } else if (board[rock_location[0]][j] == 'B'){
                break;
            }
        }
        for (int j = rock_location[1]; j >= 0; --j) {
            if (board[rock_location[0]][j] == 'p') {
                ++ans;
                break;
            } else if (board[rock_location[0]][j] == 'B'){
                break;
            }
        }
        return ans;
    }
};
