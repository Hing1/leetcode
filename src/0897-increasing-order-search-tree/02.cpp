/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 04:40:14 2020
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
    TreeNode *conListTree(vector<int> vi) {
        TreeNode *ans = new TreeNode(vi[0]);
        TreeNode *root = ans;
        for (int i = 1; i < vi.size(); ++i) {
            root->right = new TreeNode(vi[i]);
            root = root->right;
        }
        return ans;
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> vi;
        vi.reserve(1024);
        stack<TreeNode *> stn;
        while (root || !stn.empty()) {
            while (root) {
                stn.push(root);
                root = root->left;
            }
            if (!stn.empty()) {
                root = stn.top();
                stn.pop();
                vi.push_back(root->val);
                root = root->right;
            }
        }
        return conListTree(vi);
    }
};
