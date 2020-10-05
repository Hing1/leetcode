func runningSum(nums []int) []int {
    sum := 0
    for i := range nums {
        sum += nums[i]
        nums[i] = sum
    }
    return nums
}