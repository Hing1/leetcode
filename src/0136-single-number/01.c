/*************************************************************************
# File Name: 01.c
# Author: Hing
# mail: hing123@126.com
# Created Time: Fri Dec 20 19:24:55 2019
 ************************************************************************/

int singleNumber(int* nums, int numsSize){
    int ans = nums[0];
    for(int i = 1;i < numsSize;i ++) {
        ans = ans ^ nums[i];
    }
    return ans;
}
