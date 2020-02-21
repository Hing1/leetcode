/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Sat Jan 11 08:40:12 2020
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0)
            return NULL;
        int mid = nums.size() / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        vector<int> temp;
        for(int i = 0; i < mid; ++i) {
            temp.push_back(nums[i]);
        }
        root->left = sortedArrayToBST(temp);
        temp.resize(0);
        for(int i = mid + 1; i < nums.size(); ++i) {
            temp.push_back(nums[i]);
        }
        root->right = sortedArrayToBST(temp);
        return root;
    }
};
