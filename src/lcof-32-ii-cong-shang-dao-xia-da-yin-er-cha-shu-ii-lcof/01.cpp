/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Aug 18 18:59:40 2020
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qtn;
        qtn.push(root);
        vector<vector<int>> ans;
        while(!qtn.empty()) {
            vector<int> level;
            int len = qtn.size();
            for(int i = 0; i < len; ++i) {
                TreeNode* temp = qtn.front();
                qtn.pop();
                if (temp) {
                    level.push_back(temp->val);
                    if(temp->left)
                        qtn.push(temp->left);
                    if(temp->right)
                        qtn.push(temp->right);
                }
            }
            if(level.size())
                ans.push_back(level);
        }
        return ans;
    }
};
