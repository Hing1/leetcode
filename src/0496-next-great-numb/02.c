/*************************************************************************
# File Name: 02.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Fri Dec 20 19:27:51 2019
 ************************************************************************/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize=nums1Size;
    int *returnNums;
    returnNums=(int *)malloc(*returnSize * sizeof(int*));

    for(int i = 0; i < nums1Size; i++) {
        int j, k;
        for(j = 0;j < nums2Size; j++) {
            if(nums1[i]==nums2[j])
                break;
        }

        for(k = j; k < nums2Size;k++) {
            if(nums2[j] < nums2[k]) {
                returnNums[i] = nums2[k];
                break;
            }
        }
        if(k == nums2Size)
            returnNums[i]=-1;
    }
    return returnNums;
}
