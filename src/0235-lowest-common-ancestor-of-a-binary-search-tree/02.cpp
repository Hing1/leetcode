/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Wed Feb 26 00:31:43 2020
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
        while (root) {
            if ((p->val <= root->val && root->val <= q->val)
            || (q->val <= root->val && root->val <= p->val)) {
                return root;
            } else if (p->val <= root->val && q->val <= root->val) {
                root = root->left;
            } else {
                root = root->right;
            }
        }
        return NULL;
    }
};
