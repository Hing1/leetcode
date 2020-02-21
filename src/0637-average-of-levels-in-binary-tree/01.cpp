/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 20 19:38:38 2020
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if (root == NULL)
            return ans;
        vector<vector<TreeNode *>> vtn;
        
        vector<TreeNode *> vroot;
        vroot.push_back(root);
        vtn.push_back(vroot);
        ans.push_back((double)root->val);

        
        for (int i = 0; i >= 0; ++i) {
            vector<TreeNode *> temp;
            long long sum = 0;
            int count = 0;
            bool flag = false;
            for (int j = 0; j < vtn[i].size(); ++j) {
                if (vtn[i][j]->left) {
                    temp.push_back(vtn[i][j]->left);
                    sum += vtn[i][j]->left->val;
                    ++count;
                    flag = true;
                }
                if (vtn[i][j]->right) {
                    temp.push_back(vtn[i][j]->right);
                    sum += vtn[i][j]->right->val;
                    ++count;
                    flag = true;
                }
            }
            vtn.push_back(temp);
            if (flag == false) {
                break;
            } else {
                double rev = (double)sum / (double)count;
                ans.push_back(rev);
            }
        }
        return ans;
    }
};
