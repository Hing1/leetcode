/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Aug 20 15:14:32 2020
 ************************************************************************/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pqi(stones.begin(), stones.end());
        while(!pqi.empty()) {
            int temp = pqi.top();
            pqi.pop();
            if (pqi.empty())
                return temp;
            temp -= pqi.top();
            pqi.pop();
            if (temp)
                pqi.push(temp);
        }
        return 0;
    }
};
