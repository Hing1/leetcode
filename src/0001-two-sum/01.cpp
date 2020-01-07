/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Tue Jan  7 13:43:58 2020
 ************************************************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vi;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    vi.push_back(i);
                    vi.push_back(j);
                }
            }
        }
        return vi;
    }
};

