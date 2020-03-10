/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar 10 16:26:37 2020
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
    bool isValidBST(TreeNode* root) {
        if (root != NULL) {
            TreeNode *p = root;
            stack<TreeNode *> st;
            long int pre = -2147483649;
            while (p || !st.empty()) {
                while (p) {
                    st.push(p);
                    p = p->left;
                }
                p = st.top();
                st.pop();
                if (pre >= p->val)
                    return false;
                pre = p->val;
                p = p->right;
            }
        }
        return true;
    }
};
