/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Mar  1 00:45:43 2020
 ************************************************************************/

class Solution {
public:
    vector<int> constructRectangle(int area) {
        if (area == 0) {
            vector<int> vi;
            return vi;
        }
        vector<int> vi = {0, 0};
        vi[1] = sqrt(area);
        while (area % vi[1] != 0) {
            --vi[1];
        }
        vi[0] = area / vi[1];
        return vi;
    }
};
