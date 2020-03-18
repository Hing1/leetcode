/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Mar 18 23:24:52 2020
 ************************************************************************/

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return !(rec1[2] <= rec2[0] ||
                 rec1[3] <= rec2[1] ||
                 rec1[0] >= rec2[2] ||
                 rec1[1] >= rec2[3]);
    }
};
