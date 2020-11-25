/*************************************************************************
# File Name: 01.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Nov 25 15:04:03 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
    thead := ListNode{0, nil}
    for head != nil {
        temp := head
        head = head.Next
        temp.Next = thead.Next
        thead.Next = temp
    }
    return thead.Next
}
