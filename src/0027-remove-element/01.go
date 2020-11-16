/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Nov 16 13:10:57 2020
 ************************************************************************/

func removeElement(nums []int, val int) int {
    i, j := 0, len(nums) - 1
    for i <= j {
        if nums[i] == val {
            nums[i] = nums[j]
            j--
        } else {
            i++
        }
    }
    return j + 1;
}
