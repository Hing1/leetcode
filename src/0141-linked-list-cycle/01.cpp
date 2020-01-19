/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Sun Jan 19 23:18:46 2020
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
    bool hasCycle(ListNode *head) {
        if (head == NULL)
            return false;
        ListNode *temp = head->next;
        while (temp) {
            if (temp == head)
                return true;
            head = head->next;
            if (temp->next != NULL)
                temp = temp->next->next;
            else
                return false;
        }
        return false;
    }
};
