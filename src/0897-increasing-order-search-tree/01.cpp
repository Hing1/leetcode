/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Sat Jan 18 09:08:56 2020
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
    vector<int> traversal(TreeNode *root) {
        vector<int> vi;
        if (root != NULL) {
            vector<int> temp = traversal(root->left);
            for (auto &i:temp)
                vi.push_back(i);
            vi.push_back(root->val);
            temp = traversal(root->right);
            for (auto &i:temp)
                vi.push_back(i);
            temp.clear();
        }
        return vi;
    }
    void insert(TreeNode *&root, int key) {
        TreeNode *temp = new TreeNode(key);
        if (root == NULL) {
            root = temp;
        } else {
            TreeNode *tRoot = root;
            while(tRoot->right != NULL)
                tRoot = tRoot->right;
            tRoot->right = temp;
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> vi;
        if (vi.size() == 0)
            vi = traversal(root);
        TreeNode *ans = NULL;
        for (int i = 0; i < vi.size(); ++i) {
            insert(ans, vi[i]);
        }
        vi.clear();
        return ans;
    }
};
