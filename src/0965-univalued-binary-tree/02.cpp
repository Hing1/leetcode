/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Sep  5 09:56:48 2020
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
        stack<TreeNode *> stk;
        stk.push(root);
        int key = root->val;
        while (!stk.empty()) {
            TreeNode *temp = stk.top();
            stk.pop();
            if (temp->val != key)
                return false;
            if (temp->left)
                stk.push(temp->left);
            if (temp->right)
                stk.push(temp->right);
        }
        return true;
    }
};
