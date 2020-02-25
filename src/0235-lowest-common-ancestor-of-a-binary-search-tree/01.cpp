/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 26 00:26:25 2020
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL)
            return NULL;
        if ((p->val <= root->val && root->val <= q->val)
         || (q->val <= root->val && root->val <= p->val)) {
            return root;
        } else if (p->val <= root->val && q->val <= root->val) {
            return lowestCommonAncestor(root->left, p, q);
        } else {
            return lowestCommonAncestor(root->right, p, q);
        }
    }
};
