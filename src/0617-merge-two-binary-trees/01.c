/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 14:58:07 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2){
    if (t1 != NULL && t2 != NULL) {
        struct TreeNode * t3 = (struct TreeNode *) malloc (sizeof(struct TreeNode));
        t3-> val = t1->val + t2->val;
        t3->left = mergeTrees(t1->left, t2->left);
        t3->right = mergeTrees(t1->right, t2->right);
        return t3;
    } else if (t1 != NULL){
        return t1;
    } else {
        return t2;
    }
}

