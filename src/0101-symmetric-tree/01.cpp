/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Feb  4 23:24:39 2020
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
    bool isMirror(TreeNode *r1, TreeNode *r2) {
        if (r1 == NULL && r2 == NULL) {
            return true;
        } else if (r1 == NULL || r2 == NULL) {
            return false;
        } else {
            if (r1->val != r2->val)
                return false;
            return isMirror(r1->left, r2->right) && isMirror(r1->right, r2->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
        if (NULL == root)
            return true;
        return isMirror(root->left, root->right);
    }
};
