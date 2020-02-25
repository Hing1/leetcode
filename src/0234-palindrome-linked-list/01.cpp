/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 26 00:16:45 2020
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
    bool isPalindrome(ListNode* head) {
        if (NULL == head || NULL == head -> next)
            return true;
        ListNode *midhead = head;
        ListNode *thead = head;
        while (thead->next && thead->next->next) {
            midhead = midhead->next;
            thead = thead->next->next;
        }
        midhead = midhead->next;
        
        vector<int> vi;
        while (midhead) {
            vi.push_back(midhead->val);
            midhead = midhead->next;
        }
        thead = head;
        for (int i = vi.size() - 1; i >= 0; --i) {
            if (thead->val != vi[i])
                return false;
            thead = thead->next;
        }
        return true;
    }
};
