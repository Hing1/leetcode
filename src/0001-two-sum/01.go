/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Nov 16 13:18:50 2020
 ************************************************************************/

func twoSum(nums []int, target int) []int {
    for i, v := range nums {
        for j := i + 1; j < len(nums); j++ {
            if v + nums[j] == target {
                return []int{i, j}
            }
        }
    }
    return nil
}
