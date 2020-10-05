func kidsWithCandies(candies []int, extraCandies int) []bool {
    max := candies[0]
    for i := range candies {
        if candies[i] > max {
            max = candies[i]
        }
    }
    ans := make ([]bool, len(candies))
    for i := range candies {
        if candies[i] + extraCandies >= max {
            ans[i] = true
        }
    }
    return ans
}