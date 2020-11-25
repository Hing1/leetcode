/*************************************************************************
# File Name: 02.go
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Nov 25 15:04:26 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
    if head == nil || head.Next == nil {
        return head
    }
    ans := reverseList(head.Next)
    head.Next.Next = head
    head.Next = nil
    return ans
}
