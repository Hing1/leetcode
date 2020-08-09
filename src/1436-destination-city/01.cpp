/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 20:31:07 2020
 ************************************************************************/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> mss;
        for (int i = 0; i < paths.size(); ++i) {
            mss[paths[i][0]] += paths[i][1];
        }
        string city = paths[0][0]; 
        while(mss.count(city)){
            city = mss[city];
        }
        return city;
    }
};
