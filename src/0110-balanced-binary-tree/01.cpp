/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 20 22:51:17 2020
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
    bool helper(TreeNode* root, int &height){
        if (root == NULL) {
            height = -1;
            return true;
        }
        int leftHeight = 0;
        int rightHeight = 0;
        if (helper(root->left, leftHeight) && helper(root->right, rightHeight)) {
            height = max(leftHeight, rightHeight) + 1;
            if (abs(leftHeight - rightHeight) <= 1)
                return true;
        }
        return false;
    }
public:
    bool isBalanced(TreeNode* root) {
        int height = 0;
        return helper(root, height);
    }
};
