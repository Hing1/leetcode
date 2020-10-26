func numIdenticalPairs(nums []int) int {
    var bucket [101]int
    for _, v := range nums {
        bucket[v]++
    }
    ans := 0
    for _, v := range bucket {
        if v > 1 {
            ans += v * (v - 1) / 2;
        }
    }
    return ans
}