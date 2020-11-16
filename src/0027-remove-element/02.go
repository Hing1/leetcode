/*************************************************************************
# File Name: 02.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Nov 16 13:18:14 2020
 ************************************************************************/

func removeElement(nums []int, val int) int {
    for i := 0; i < len(nums); {
        if nums[i] == val {  
            nums = append(nums[:i], nums[i + 1:]...)
        } else {
            i++
        }
    }
    return len(nums)
}
