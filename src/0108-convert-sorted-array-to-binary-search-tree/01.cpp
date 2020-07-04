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
		int len = nums.size();
        if (len == 0)
            return NULL;
        int mid = len / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        vector<int> temp(mid, 0);
        for(int i = 0; i < mid; ++i) {
            temp[i] = nums[i];
        }
        root->left = sortedArrayToBST(temp);
        temp.resize(len - mid - 1);
        for(int i = 0; i < len - mid - 1; ++i) {
            temp[i] = nums[mid + i + 1];
        }
        root->right = sortedArrayToBST(temp);
        return root;
    }
};
