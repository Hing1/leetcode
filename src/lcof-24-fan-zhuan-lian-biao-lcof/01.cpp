/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 11 18:23:38 2020
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
    ListNode* reverseList(ListNode* head) {
        ListNode *thead = new ListNode(-1);
        thead->next = NULL;
        while (head) {
            ListNode *temp = head;
            head = head->next;
            temp->next = thead->next;
            thead->next = temp;
        }
        return thead->next;
    }
};
