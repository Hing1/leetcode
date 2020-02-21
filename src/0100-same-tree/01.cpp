/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 13:16:49 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p != NULL && q != NULL) {
            if (p->val == q->val)
                return (isSameTree(p->left, q->left) && (isSameTree(p->right, q->right)));
            else
                return false;
        } else if (p == NULL && q == NULL) {
            return true;
        } else {
            return false;
        }
    }
};

