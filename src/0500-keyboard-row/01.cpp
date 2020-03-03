/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar  3 17:36:02 2020
 ************************************************************************/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> vi(128, -1);
        vector<string> vs = {"QWERTYUIOPqwertyuiop",
                             "ASDFGHJKLasdfghjkl", 
                             "ZXCVBNMzxcvbnm"};
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < vs[i].size(); ++j) {
                vi[vs[i][j] - ' '] = i;
            }
        }
        vector<string> ans;
        for (int i = 0; i < words.size(); ++i) {
            int len = words[i].size();
            bool flag = true;
            if (len > 1) {
                int temp = vi[words[i][0] - ' '];
                for (int j = 1; j < len; ++j) {
                    if (vi[words[i][j] - ' '] != temp)
                        flag = false;
                }
            }
            if (flag)
                ans.push_back(words[i]);
        }
        return ans;
    }
};
