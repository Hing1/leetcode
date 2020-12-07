/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Dec  7 20:51:54 2020
 ************************************************************************/

func matrixScore(A [][]int) int {
    row := len(A)
    col := len(A[0])
    for i := 0; i < row; i++ {
        if A[i][0] == 0 {
            for j := 0; j < col; j++ {
                if A[i][j] == 0 {
                    A[i][j] = 1
                } else {
                    A[i][j] = 0
                }
            }
        }
    }
    for j := 1; j < col; j++ {
        count := 0
        for i := 0; i < row; i++ {
            if A[i][j] == 0 {
                count++
            }
        }
        if count > row / 2 {
            for i := 0; i < row; i++ {
                if A[i][j] == 0 {
                    A[i][j] = 1
                } else {
                    A[i][j] = 0
                }
            }
        }
    }
    ans := 0
    for i := 0; i < row; i++ {
        temp := 0
        for j := 0; j < col; j++ {
            temp = temp * 2 + A[i][j]
        }
        ans += temp
    }
    return ans
}
