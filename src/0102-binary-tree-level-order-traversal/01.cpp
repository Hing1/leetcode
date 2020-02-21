/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 20 19:21:42 2020
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
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        vector<vector<TreeNode *>> vtn;
        
        vector<TreeNode *> vroot;
        vroot.push_back(root);
        vtn.push_back(vroot);
        vector<int> viroot;
        viroot.push_back(root->val);
        ans.push_back(viroot);
        
        for (int i = 0; i >= 0; ++i) {
            vector<TreeNode *> temp;
            vector<int> tempvi;
            bool flag = false;
            for (int j = 0; j < vtn[i].size(); ++j) {
                if (vtn[i][j]->left) {
                    temp.push_back(vtn[i][j]->left);
                    tempvi.push_back(vtn[i][j]->left->val);
                    flag = true;
                }
                if (vtn[i][j]->right) {
                    temp.push_back(vtn[i][j]->right);
                    tempvi.push_back(vtn[i][j]->right->val);
                    flag = true;
                }
            }
            vtn.push_back(temp);
            if (tempvi.size())
                ans.push_back(tempvi);
            if (flag == false)
                break;
        }
        return ans;
    }
};
