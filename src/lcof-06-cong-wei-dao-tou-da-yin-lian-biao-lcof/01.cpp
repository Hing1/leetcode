/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug  8 21:18:50 2020
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
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;
        ans.reserve(10000);
        while (head) {
            ans.push_back(head->val);
            head = head->next;
        }
        int len = ans.size();
        vector<int> rev(len, 0);
        for (int i = 0; i < len; ++i) {
            rev[i] = ans[len - i - 1];
        }
        return rev;
    }
};
