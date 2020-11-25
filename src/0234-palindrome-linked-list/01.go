/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Nov 25 15:22:02 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func isPalindrome(head *ListNode) bool {
    si := []int{}
    len := 0
    for head != nil {
        si = append(si, head.Val)
        head = head.Next
        len++
    }
    for i := 0; i < len / 2; i++ {
        if si[i] != si[len - i - 1] {
            return false
        }
    }
    return true
}
