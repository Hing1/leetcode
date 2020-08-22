/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug 22 13:11:29 2020
 ************************************************************************/

class Solution {
    int countNegativeVector(vector<int> nums) {
        int len = nums.size();
        int left = 0;
        int right = len;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == 0) {
                left = mid + 1;
            } else if (nums[mid] > 0) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return len - left;
    }
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); ++i) {
            ans += countNegativeVector(grid[i]);
        }
        return ans;
    }
};
