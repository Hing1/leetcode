/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Jun 23 23:33:35 2020
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
    bool findTarget(TreeNode* root, int k) {
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
                vi.push_back(root->val);
                stn.pop();
                root = root->right;
            }
        }
        int left = 0, right = vi.size() - 1;
        int sum = 0;
        while (left < right) {
            sum = vi[left] + vi[right];
            if (sum == k) {
                return true;
            } else if (sum < k) {
                ++left;
            } else {
                --right;
            }
        }
        return false;
    }
};
