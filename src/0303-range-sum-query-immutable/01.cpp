/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 17:10:31 2020
 ************************************************************************/

class NumArray {
public:
    NumArray(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            vi.push_back(nums[i]);
        }
    }
    int sumRange(int i, int j) {
        int sum = 0;
        for (int k = i; k <= j; ++k) {
            sum += vi[k];
        }
        return sum;
    }
private:
    vector<int> vi;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
