/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# Mail: hing123@126.com
# Created Time: Fri Feb 21 10:07:00 2020
 ************************************************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> vi = {0, 0};
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j) {
            if (numbers[i] + numbers[j] == target) {
                vi[0] = i + 1;
                vi[1] = j + 1;
                return vi;
            } else if (numbers[i] + numbers[j] > target) {
                --j;
            } else {
                ++i;
            }
        }
        return vi;
    }
};
