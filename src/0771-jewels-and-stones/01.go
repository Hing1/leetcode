func numJewelsInStones(J string, S string) int {
    var bucket [63]int
    for _, v := range J {
        bucket[v - 'A']++
    }
    ans := 0
    for _, v := range S {
        if bucket[v - 'A'] > 0 {
            ans++
        }
    }
    return ans
}