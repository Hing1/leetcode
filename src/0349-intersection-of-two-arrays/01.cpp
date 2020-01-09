/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Thu Jan  9 08:18:26 2020
 ************************************************************************/

class Solution {
public:
    bool isElem(vector<int> &vi, int key) {
        for (auto itr = vi.begin(); itr != vi.end(); ++itr) {
            if (*itr == key)
                return true;
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vi;
        for (auto itr = nums1.begin(); itr != nums1.end(); ++itr) {
            if (isElem(nums2, *itr) && !isElem(vi, *itr))
                vi.push_back(*itr);
        }
        return vi;
    }
};

