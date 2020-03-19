/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Mar 19 13:37:59 2020
 ************************************************************************/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int> ans;
        ans.reserve(min(len1, len2));
        for (int i = 0, j = 0; i < len1 && j < len2; ++i, ++j) {
            if(nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
            } else if (nums1[i] < nums2[j]){
                --j;
            } else {
                --i;
            }
        }
        return ans;
    }
};
