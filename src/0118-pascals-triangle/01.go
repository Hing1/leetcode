/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Nov 16 16:39:44 2020
 ************************************************************************/

func generate(numRows int) [][]int {
    if numRows == 0 {
        return [][]int {}
    } else if numRows == 1 {
        return [][]int {{1}}
    }
    ans := generate(numRows - 1)
    pre := ans[len(ans) - 1]
    var cur =  []int{1}
    for i := 0; i < len(pre) - 1; i++ {
        cur = append(cur, pre[i] + pre[i + 1])
    }
    cur = append(cur, 1)
    ans = append(ans, cur)
    return ans
}
