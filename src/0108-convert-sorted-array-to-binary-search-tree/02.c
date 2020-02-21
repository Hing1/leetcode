/*************************************************************************
# File Name: 02.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Sat Jan 11 08:49:09 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode * mySort(int *nums, int left, int right) {
    if (left >= right)
        return NULL;
    int mid = (left + right) / 2;
    struct TreeNode *root = (struct TreeNode *) malloc (sizeof(struct TreeNode));
    root->val = nums[mid];
    root->left = mySort(nums, left, mid);
    root->right = mySort(nums, mid + 1, right);
    return root;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    return mySort(nums, 0, numsSize);
}
