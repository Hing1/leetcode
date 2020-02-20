/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# Mail: hing123@126.com
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
public:
    bool myisBalanced(TreeNode* root, int &height){
        if (root == NULL) {
            height = -1;
            return true;
        }
        int leftHeight = 0;
        int rightHeight = 0;
        if (myisBalanced(root->left, leftHeight) && myisBalanced(root->right, rightHeight)) {
            height = max(leftHeight, rightHeight) + 1;
            if (abs(leftHeight - rightHeight) <= 1)
                return true;
        }
        return false;
    }
    bool isBalanced(TreeNode* root) {
        int height = 0;
        return myisBalanced(root, height);
    }
};
