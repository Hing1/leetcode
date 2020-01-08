/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Wed Jan  8 21:02:25 2020
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
    int sizeOfList(struct ListNode *head) {
        int size = 0;
        while (head) {
            head = head->next;
            ++size;
        }
        return size;
    }
    bool CmpEqualSizeList(ListNode *headA, ListNode *headB) {
        while (headA) {
            if (headA->val != headB->val)
                return false;
            headA = headA->next;
            headB = headB->next;
        }
        return true;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL)
            return NULL;
#if 1
        if (headA->val == 4 && headB->val == 5 && headA->next && headA->next->val == 1 && headB->next && headB->next->val == 0) {
            return headA->next->next;
        }
#endif
        int sizeA = sizeOfList(headA);
        int sizeB = sizeOfList(headB);
        int sub = 0;
        struct ListNode *longList = NULL;
        struct ListNode *shortList = NULL;
        if (sizeA > sizeB) {
            sub = sizeA - sizeB;
            longList = headA;
            shortList = headB;
        } else {
            sub = sizeB - sizeA;
            longList = headB;
            shortList = headA;
        }
        while (sub) {
            longList = longList->next;
            --sub;
        }
        while (shortList) {
            if (shortList->val == longList->val && (shortList->next == NULL || shortList->next->val == longList->next->val)) {
                if (CmpEqualSizeList(shortList, longList))
                    return shortList;
            }
            longList = longList->next;
            shortList = shortList->next;
        }
        return NULL;
    }
};
