/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Feb 17 00:27:00 2020
 ************************************************************************/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.size();
        int count = 0;
        for (int i = 1; i < nums.size(); ++i) {
            while (i < nums.size() && nums[count] == nums[i]) {
                ++i;
            }
            if (i == nums.size()) {
                break;
            } else {
                ++count;
                nums[count] = nums[i];
            }
        }
        return count + 1;
    }
};
