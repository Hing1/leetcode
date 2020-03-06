/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar  6 15:56:44 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> vvi;
        for (int i = 1; i <= (target - 1) / 2; ++i) {
            int sum = 0;
            for (int j = i; sum <= target; ++j) {
                sum += j;
                if (sum == target) {
                    vector<int> temp = {i, j};
                    vvi.push_back(temp);
                    break;
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
