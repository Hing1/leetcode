/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 02:42:13 2020
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
    int kthLargest(TreeNode* root, int k) {
        vector<int> vi;
        vi.reserve(1024);
        stack<TreeNode *> stn;
        while (root || !stn.empty()) {
            while (root) {
                stn.push(root);
                root = root->right;
            }
            if (!stn.empty()) {
                root = stn.top();
                vi.push_back(root->val);
                stn.pop();
                root = root->left;
            }
        }
        return vi[k - 1];
    }
};
