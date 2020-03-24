/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar 24 23:29:43 2020
 ************************************************************************/

class Solution {
public:
    int massage(vector<int>& nums) {
        int fst = 0, snd = 0;
        for(auto &i : nums){
            int temp = snd;
            snd = max(snd, fst + i);
            fst = temp;
        }
        return snd;
    }
};
