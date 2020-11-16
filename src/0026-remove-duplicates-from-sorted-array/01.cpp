/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Feb 17 00:27:00 2020
 ************************************************************************/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len <= 1)
            return len;
        int count = 0;
        for (int i = 1; i <len; ++i) {
            if (nums[count] != nums[i]) {
                ++count;
                nums[count] = nums[i];
            }
        }
        return count + 1;
    }
};
