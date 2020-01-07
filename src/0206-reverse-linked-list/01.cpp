/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
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
        struct ListNode *thead = (struct ListNode *)malloc(sizeof(struct ListNode));
        thead->next = NULL;
        struct ListNode *temp = NULL;
        while (head) {
            temp = head;
            head = head->next;
            temp->next = thead->next;
            thead->next = temp;
        }
        return (thead->next);
    }
};

