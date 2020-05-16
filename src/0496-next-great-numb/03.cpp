/*************************************************************************
# File Name: 03.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat May 16 18:34:11 2020
 ************************************************************************/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int> ans(len1, 0);
        for (int i = 0; i < len1; ++i) {
            int j = 0, k = 0;
            for (; j < len2; ++j) {
                if (nums1[i] == nums2[j])
                    break;
            }
            for (k = j; k < len2; ++k) {
                if (nums2[j] < nums2[k]) {
                    ans[i] = nums2[k];
                    break;
                }
            }
            if (k == len2)
                ans[i] = -1;
        }
        return ans;
    }
};
