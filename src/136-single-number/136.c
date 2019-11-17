int singleNumber(int* nums, int numsSize){
    int ans = nums[0];
    for(int i = 1;i < numsSize;i ++) {
        ans = ans ^ nums[i];
    }
    return ans;
}