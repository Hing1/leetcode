/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Nov 16 13:19:55 2020
 ************************************************************************/

func removeDuplicates(nums []int) int {
    count := 0
    for _, v := range nums {
        if nums[count] != v {
            count++
            nums[count] = v
        }
    }
    return count + 1
}
