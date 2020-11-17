/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Nov 16 16:43:03 2020
 ************************************************************************/

func getRow(rowIndex int) []int {
    if rowIndex == 0 {
        return []int {1}
    }
    pre := getRow(rowIndex - 1)
    var cur =  []int{1}
    for i := 0; i < len(pre) - 1; i++ {
        cur = append(cur, pre[i] + pre[i + 1])
    }
    cur = append(cur, 1)
    return cur
}
