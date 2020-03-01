/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 13:38:43 2020
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
        ListNode *thead = new ListNode(0));
        while (head) {
            ListNode *temp = head;
            head = head->next;
            temp->next = thead->next;
            thead->next = temp;
        }
        return (thead->next);
    }
};

