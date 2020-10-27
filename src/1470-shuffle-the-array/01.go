func shuffle(nums []int, n int) []int {
	ans := make([]int, 2 * n)
	for i := 0; i < n; i++ {
		ans[i * 2] = nums[i]
		ans[i * 2 + 1] = nums[i + n]
	}
	return ans
}