/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar  6 16:25:06 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> vvi;
        vvi.reserve(16);
        for (int x = 1; x <= (target - 1) / 2; ++x) {
            long int delta = 1 - 4 * (x - 1ll * x * x - 2 * target);
            if (delta >= 0) {
                long int delta_sqrt = sqrt(delta + 0.5);
                if (delta_sqrt * delta_sqrt == delta && (delta_sqrt - 1) % 2 == 0){
                    int y = (-1 + delta_sqrt) / 2;
                    if (x < y) {
                        vector<int> temp = {x, y};
                        vvi.push_back(temp);
                    }
                }
            }
        }
        vector<vector<int>> ans;
        int len = vvi.size();
        ans.reserve(len);
        for (int i = 0; i < len; ++i) {
            vector<int> temp = vvi[i];
            vector<int> ans_temp;
            ans_temp.reserve(temp[1] - temp[0] + 1);
            for (int j = temp[0]; j <= temp[1]; ++j) {
                ans_temp.push_back(j);
            }
            ans.push_back(ans_temp);
        }
        return ans;
    }
};
