/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 26 23:44:47 2020
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
        vector<int> vi;
        int len = 0;
        while (head) {
            vi.push_back(head->val);
            head = head->next;
            ++len;
        }
        for (int i = 0, j = len - 1; i < j; ++i, --j) {
            if (vi[i] != vi[j])
                return false;
        }
        return true;
    }
};
