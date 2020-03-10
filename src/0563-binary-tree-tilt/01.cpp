/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar 10 15:15:18 2020
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
    int sumNode(TreeNode *root) {
        if (root == NULL)
            return 0;
        return sumNode(root->left) + sumNode(root->right) + root->val;
    }
    int subNode(TreeNode *root) {
        if (root == NULL)
            return 0;
        return abs(sumNode(root->left) - sumNode(root->right));
    }
public:
    int findTilt(TreeNode* root) {
        if (root == NULL)
            return 0;
        return subNode(root) + findTilt(root->left) + findTilt(root->right);
    }
};
