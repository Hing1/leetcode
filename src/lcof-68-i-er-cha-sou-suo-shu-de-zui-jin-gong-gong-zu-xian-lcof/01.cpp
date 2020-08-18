/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 12:37:21 2020
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
        if (root) {
            if (root->val < p->val && root->val < q->val)
                return lowestCommonAncestor(root->right, p, q);
            if (root->val > p->val && root->val > q->val)
                return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};
