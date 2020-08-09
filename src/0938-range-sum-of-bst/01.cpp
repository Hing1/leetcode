/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 16:28:13 2020
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
#if 1
	int rangeSumBST(TreeNode* root, int L, int R) {
        if (root == NULL)
            return 0;
        if (root->val < L)
            return rangeSumBST(root->right, L, R);
        if (root->val > R)
            return rangeSumBST(root->left, L, R);
        return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }
#else
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (root == NULL)
            return 0;
        if (L <= root->val && root->val <= R)
            return (root->val + rangeSumBST(root->left, L, R) + (rangeSumBST(root->right, L, R)));
        return (rangeSumBST(root->left, L, R) + (rangeSumBST(root->right, L, R)));
    }
#endif
};

