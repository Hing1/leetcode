/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Feb 10 15:52:35 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int size(ListNode *head) {
        if (head == NULL)
            return 0;
        int len = 0;
        while (head) {
            head = head->next;
            ++len;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int len = size(head);
        if (len == 0)
            return NULL;
        k = k % len;
        if (k == 0)
            return head;
        ListNode *head1= head;
        for (int i = 0; i < len - k - 1; ++i) {
            head = head->next;
        }
        ListNode *head2 = head->next;
        head->next = NULL;
        head = head2;
        while (head2->next) {
            head2 = head2->next;
        }
        head2->next = head1;
        return head;
    }
};
