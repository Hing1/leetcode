/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar 10 15:19:06 2020
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
    int ans;
    int sumNode(TreeNode *root) {
        if (root == NULL)
            return 0;
        int L = sumNode(root->left);
        int R = sumNode(root->right);
        ans += abs(L - R);
        return L + R + root->val;
    }
public:
    int findTilt(TreeNode* root) {
        ans = 0;
        sumNode(root);
        return ans;
    }
};
