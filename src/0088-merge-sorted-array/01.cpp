/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kian kwok123@126.com
# Created Time: Thu Feb 20 18:31:54 2020
 ************************************************************************/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = m + n - 1; i >= 0; --i) {
            if (m - 1 >= 0 && n - 1 >= 0) {
                if (nums1[m - 1] < nums2[n - 1]) {
                    nums1[i] = nums2[n - 1];
                    --n;
                } else {
                    nums1[i] = nums1[m - 1];
                    --m;
                }
            } else if (m - 1 >= 0) {
                nums1[i] = nums1[m - 1];
                --m;
            } else {
                nums1[i] = nums2[n - 1];
                --n;
            }
        }
    }
};
