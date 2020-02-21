/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Feb 10 15:34:42 2020
 ************************************************************************/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> vi;
        vi.reserve(k);
        for (int i = nums.size() - k; i < nums.size(); ++i) {
            vi.push_back(nums[i]);
        }
        for (int i = nums.size() - 1; i >= k; --i) {
            nums[i] = nums[i - k];
        }
        for (int i = 0; i < k; ++i) {
            nums[i] = vi[i];
        }
    }
};
