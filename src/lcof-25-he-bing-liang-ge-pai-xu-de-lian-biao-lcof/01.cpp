/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 11 16:54:19 2020
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
        ListNode *ans = NULL;
        if (l1 == NULL) {
            ans = l2;
        } else if (l2 == NULL) {
            ans = l1;
        } else {
            if (l1->val < l2->val) {
                ans = l1;
                l1 = l1->next;
            } else {
                ans = l2;
                l2 = l2->next;
            }
            ans->next = mergeTwoLists(l1, l2);
        }
        return ans;
    }
};
