/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 20:31:25 2020
 ************************************************************************/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> msi;
        for (int i = 0; i < paths.size(); ++i) {
            msi[paths[i][0]] += 1;
            msi[paths[i][1]] += 0;
        }
        for (auto itr:msi) {
            if (itr.second == 0) {
                return itr.first;
            }
        }
        return "";
    }
};
