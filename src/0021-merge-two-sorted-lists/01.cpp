/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Sun Jan  5 19:29:02 2020
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        struct ListNode l3(-1);
        struct ListNode *head = &l3;
        while(l2 && l1) {
            struct ListNode *temp;
            if (l1->val < l2->val) {
                temp = l1;
                l1 = temp->next;
            } else {
                temp = l2;
                l2 = temp->next;
            }
            temp->next = nullptr;
            head->next = temp;
            head = head->next;
        }
        while (l1) {
            struct ListNode *temp = l1;
            l1 = l1->next;
            temp->next = nullptr;
            head->next = temp;
            head = head->next;
        }
        while (l2) {
            struct ListNode *temp = l2;
            l2 = l2->next;
            temp->next = nullptr;
            head->next = temp;
            head = head->next;
        }
        return l3.next;
    }
};

