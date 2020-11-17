/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Nov 16 16:54:11 2020
 ************************************************************************/

func maxProfit(prices []int) (ans int) {
    for i := 1; i < len(prices); i++ {
        ans += max(0, prices[i] - prices[i - 1])
    }
    return
}

func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}

