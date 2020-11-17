/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Nov 16 16:47:20 2020
 ************************************************************************/

func twoSum(numbers []int, target int) []int {
    left, right := 0, len(numbers) - 1
    sum := 0
    for left < right {
        sum = numbers[left] + numbers[right]
        if (sum == target) {
            return []int {left + 1, right + 1}
        } else if (sum < target) {
            left++
        } else {
            right--
        }
    }
    return []int {-1, -1}
}
