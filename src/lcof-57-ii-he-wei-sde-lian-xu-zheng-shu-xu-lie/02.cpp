/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar  6 16:25:06 2020
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans;
        for (int x = 1; x <= (target - 1) / 2; ++x) {
            long int delta = 1 - 4 * (x - 1ll * x * x - 2 * target);
            if (delta >= 0) {
                long int delta_sqrt = sqrt(delta + 0.5);
                if (delta_sqrt * delta_sqrt == delta && (delta_sqrt - 1) % 2 == 0){
                    int y = (-1 + delta_sqrt) / 2;
                    if (x < y) {
                        vector<int> temp(y - x + 1, 0);
                        for (int i = 0; i <= y - x; ++i) {
                            temp[i] = x + i;
                        }
                        ans.push_back(temp);
                    }
                }
            }
        }
        return ans;
    }
};
