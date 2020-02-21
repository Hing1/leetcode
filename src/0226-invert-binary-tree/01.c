/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan  6 20:07:04 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if (root == NULL)
        return NULL;
    struct TreeNode *t = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    t->val = root->val;
    t->left = invertTree(root->right);
    t->right = invertTree(root->left);
    return t;
}

