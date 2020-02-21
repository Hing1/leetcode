/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Feb  2 10:35:30 2020
 ************************************************************************/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int back = nums.size() - 1;
        int i = 0;
        while (i <= back) {
            if (nums[i] == val) {
                nums[i] = nums[back];
                back--;
            } else {
                ++i;
            }
        }
        return back + 1;
    }
};
