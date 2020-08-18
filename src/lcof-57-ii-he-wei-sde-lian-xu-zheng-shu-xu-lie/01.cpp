/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar  6 15:56:44 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        for (int i = 1; i <= (target - 1) / 2; ++i) {
            int sum = 0;
            for (int j = i; sum <= target; ++j) {
                sum += j;
                if (sum == target) {
                    vector<int> temp(j - i + 1, 0);
                    for (int k = 0; k <= j - i; ++k) {
                        temp[k] = i + k;
                    }
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
