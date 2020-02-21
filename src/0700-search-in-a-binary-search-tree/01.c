/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 16:33:20 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* searchBST(struct TreeNode* root, int val){
    if (root == NULL)
        return NULL;
    if (root->val == val)
        return root;
    struct TreeNode *temp = searchBST(root->left, val);
    if (temp == NULL)
        temp = searchBST(root->right, val);
    return temp;
}
