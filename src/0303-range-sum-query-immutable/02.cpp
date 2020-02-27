/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 17:22:33 2020
 ************************************************************************/

class NumArray {
public:
    NumArray(vector<int>& nums) {
        sumVi.reserve(2 ^ 20);
        sumVi.push_back(0);
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            sumVi.push_back(sum);
        }
        sumVi.shrink_to_fit();
    }
    int sumRange(int i, int j) {
        return (sumVi[j + 1] - sumVi[i]);
    }
private:
    vector<int> sumVi;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
