/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Fri Dec 20 19:26:11 2019
 ************************************************************************/

int majorityElement(int* nums, int numsSize){
    int num[1000];
    int count[1000] = {0};
    
    num[0] = nums[0];
    count[0]++;
    int counts = 1;
    
    for(int i = 1; i < numsSize; i++) {
        int flag = 0;
        int j;
        for(j = 0; j < counts; j ++) {
            if(nums[i] == num[j]) {
                count[j]++;
                flag = 1;
            }
        }
        if(flag == 0) {
            num[j] = nums[i];
            count[j]++;
            counts++;
        }
    }
    for(int i = 0;i < counts;i++) {
        if(count[i] > (numsSize / 2)) {
            return num[i];
        }
    }
    return -1;
}
