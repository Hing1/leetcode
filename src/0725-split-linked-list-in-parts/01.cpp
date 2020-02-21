/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Feb 10 16:40:26 2020
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
    int size(ListNode *root) {
        int len = 0;
        if (NULL != root) {
            while (root) {
                root = root->next;
                ++len;
            }
        }
        return len;
    }
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int len = size(root);
        int part_len = len / k;
        int remainder = len % k;
        vector<ListNode *> vl;

        while (k--) {
            ListNode *temp_list = NULL;
            temp_list = root;
            if (root) {
                ListNode *pre = new ListNode(-1);
                pre->next = root;
                for (int i = 0; i < part_len; ++i) {
                    pre = pre->next;
                    root = root->next;
                }
                if (remainder) {
                    pre = pre->next;
                    root = root->next;
                    --remainder;
                }
                pre->next = NULL;
            }
            vl.push_back(temp_list);
        }
        return vl;
    }
};
