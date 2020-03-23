/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Wed Jan  8 20:26:33 2020
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
    ListNode* middleNode(ListNode* head) {
        if (head && head->next) {
            struct ListNode *temp = head;
            while (temp && temp->next) {
                head = head->next;
                temp = temp->next->next;
            }
        }
        return head;
    }
};
