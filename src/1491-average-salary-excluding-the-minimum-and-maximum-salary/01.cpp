/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Sep  5 09:50:01 2020
 ************************************************************************/

class Solution {
public:
    double average(vector<int>& salary) {
        int len = salary.size();
        int maxS = 0, minS = INT_MAX;
        unsigned long sum = 0;
        for (int i = 0; i < salary.size(); ++i) {
            maxS = max(maxS, salary[i]);
            minS = min(minS, salary[i]);
            sum += salary[i];
        }
        return (double)(sum - minS - maxS) / (len - 2);
    }
};
