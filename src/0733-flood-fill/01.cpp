/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed May  6 22:45:33 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int old = image[sr][sc];
        if(newColor == old) 
            return image;
        queue<vector<int>> qvi;
        qvi.push({sr, sc});
        while (!qvi.empty()) {
            vector<int> cur = qvi.front();
            qvi.pop();
            if (cur[0] - 1 >= 0 && image[cur[0] - 1][cur[1]] == old)
                qvi.push({cur[0] - 1, cur[1]});
            if (cur[1] - 1 >= 0 && image[cur[0]][cur[1] - 1] == old)
                qvi.push({cur[0], cur[1] - 1});
            if (cur[0] + 1 < image.size() && image[cur[0] + 1][cur[1]] == old)
                qvi.push({cur[0] + 1, cur[1]});
            if (cur[1] + 1 < image[0].size() && image[cur[0]][cur[1] + 1] == old)
                qvi.push({cur[0], cur[1] + 1});
            image[cur[0]][cur[1]] = newColor;
        }
        return image;
    }
};
