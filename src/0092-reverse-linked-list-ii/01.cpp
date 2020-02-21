/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 12:41:50 2020
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
    struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
        struct ListNode *thead = new struct ListNode(-1);
        thead->next = NULL;
        struct ListNode *temp = NULL;
        int count = 1;
        while(head && count < m) {
            temp = head;
            head = head->next;
            struct ListNode *t = thead;
            while (t->next != NULL) {
                t = t->next;
            }
            t->next = temp;
            temp->next = NULL;
            ++count;
        }
        struct ListNode *rev_part = (struct ListNode *)malloc(sizeof(struct ListNode));
        rev_part->next = NULL;
        while (count <= n) {
            temp = head;
            head = head->next;
            temp->next = rev_part->next;
            rev_part->next = temp;
            ++count;
        }
        struct ListNode *t = thead;
        while (t->next != NULL)
            t = t->next;
        t->next = rev_part->next;
        while(head) {
            temp = head;
            head = head->next;
            struct ListNode *t = thead;
            while (t->next != NULL) {
                t = t->next;
            }
            t->next = temp;
            temp->next = NULL;
            ++count;
        }
        return thead->next;
    }
};

