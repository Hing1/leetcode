/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed May  6 23:43:29 2020
 ************************************************************************/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); ++i)
            for (int j = 0; j < matrix[0].size(); ++j)
                if (i != 0 && j != 0 && matrix[i - 1][j - 1] != matrix[i][j])
                    return false;
        return true;
    }
};
