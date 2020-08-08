/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Aug  7 15:04:01 2020
 ************************************************************************/

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int len = startTime.size();
        int ans = 0;
        for (int i = 0; i < len; ++i) {
            if (startTime[i] <= queryTime && queryTime <= endTime[i])
                ++ans;
        }
        return ans;
    }
};
