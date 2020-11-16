/*************************************************************************
# File Name: 02.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Nov 16 13:18:54 2020
 ************************************************************************/

func twoSum(nums []int, target int) []int {
    hashTable := map[int]int{}
    for i, v := range nums {
        if p, ok := hashTable[target - v]; ok {
            return []int{p, i}
        }
        hashTable[v] = i
    }
    return nil
}

