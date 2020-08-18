/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 10:07:07 2020
 ************************************************************************/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mii;
        for (int i = 0; i < arr.size(); ++i) {
            ++mii[arr[i]];
        }
        set<int> s;
        for(auto itr : mii) {
            if(s.find(itr.second) != s.end())
                return false;
            s.insert(itr.second);
        }
        return true;
    }
};
