/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar  4 09:42:46 2020
 ************************************************************************/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>> initRot;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == 2) {
                    vector<int> temp = {i, j};
                    initRot.push_back(temp);
                }
            }
        }
        queue<vector<vector<int>>> qvvi;
        qvvi.push(initRot);
        int ans = -1;
        while (!qvvi.empty()) {
            vector<vector<int>> rot = qvvi.front();
            qvvi.pop();
            vector<vector<int>> newRot;
            for (int i = 0; i < rot.size(); ++i) {
                vector<int> temp = rot[i];
                if (temp[0] - 1 >= 0 && grid[temp[0] - 1][temp[1]] == 1) {
                    grid[temp[0] - 1][temp[1]] = 2;
                    vector<int> vi = {temp[0] - 1, temp[1]};
                    newRot.push_back(vi);
                }
                if (temp[0] + 1 <= grid.size() - 1 && grid[temp[0] + 1][temp[1]] == 1) {
                    grid[temp[0] + 1][temp[1]] = 2;
                    vector<int> vi = {temp[0] + 1, temp[1]};
                    newRot.push_back(vi);
                }
                if (temp[1] - 1 >= 0 && grid[temp[0]][temp[1] - 1] == 1) {
                    grid[temp[0]][temp[1] - 1] = 2;
                    vector<int> vi = {temp[0], temp[1] - 1};
                    newRot.push_back(vi);
                }
                if (temp[1] + 1 <= grid[0].size() - 1 && grid[temp[0]][temp[1] + 1] == 1) {
                    grid[temp[0]][temp[1] + 1] = 2;
                    vector<int> vi = {temp[0], temp[1] + 1};
                    newRot.push_back(vi);
                }
            }
            ++ans;
            if (!newRot.empty())
                qvvi.push(newRot);
        }
        bool isAllRot = true;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == 1) {
                    isAllRot = false;
                }
            }
        }
        if (isAllRot)
            return ans;
        else
            return -1;
    }
};
