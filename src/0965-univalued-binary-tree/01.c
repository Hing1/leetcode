/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan  6 20:27:36 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isUnivalTree(struct TreeNode* root){
    if (root == NULL)
        return true;
    if (root->left != NULL && root->right != NULL) {
        if (root->val != root->left->val || root->val != root->right->val)
            return false;
    } else if (root->left != NULL) {
        if (root->val != root->left->val)
            return false;
    } else if (root->right != NULL) {
        if (root->val != root->right->val)
            return false;
    }
    return (isUnivalTree(root->left) && isUnivalTree(root->right));
}

