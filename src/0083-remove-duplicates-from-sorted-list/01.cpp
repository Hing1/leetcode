/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Sun Jan 19 23:01:03 2020
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (NULL != head) {
            ListNode *thead = head;
            ListNode *temp = NULL;
            while (thead && thead->next) {
                if (thead->val == thead->next->val) {
                    temp = thead->next;
                    thead->next = temp->next;
                    delete temp;
                } else {
                    thead = thead->next;
                }
            }
        }
        return head;
    }
};
