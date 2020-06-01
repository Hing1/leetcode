/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Jun  1 09:44:41 2020
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
    bool isUnivalTree(TreeNode* root) {
        if (root == NULL)
            return true;
        if (root->left == NULL && root->right == NULL)
            return true;
        if (root->left == NULL) {
            if (root->right->val == root->val)
                return isUnivalTree(root->right);
        } else if (root->right == NULL) {
            if (root->left->val == root->val)
                return isUnivalTree(root->left);
        } else {
            if (root->left->val == root->val && root->right->val == root->val)
                return isUnivalTree(root->left) && isUnivalTree(root->right);
        }
        return false;
    }
};
