/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Fri Dec 20 19:27:51 2019
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);

int main() {
    int nums1[] = {4, 1, 2};
    int nums2[] = {1, 3, 4, 2};

    int * p;
    p = nextGreaterElement(nums1, 3, nums2, 4, p);

    for (int i = 0; i < 3; i++) {
        printf("%d ", *(p + i));
    }
    putchar(10);
    return 0;
}

int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    *returnSize = nums1Size;
    int * returnNums = (int*)calloc(*returnSize, sizeof(int*));
    for(int i = 0; i < nums1Size; i++) {
        int j = 0;
        int flag = 0;
        while(nums1[i] != nums2[j]) {
            j++;
        }
        for(int k = j + 1; k < nums2Size; k++) {
            if(nums1[k] < nums2[k]) {
                returnNums[i] = nums2[k];
                flag = 1;
                break;
            }
        }
        if(!flag)
            returnNums[i] = -1;
    }
    return returnNums;
}
