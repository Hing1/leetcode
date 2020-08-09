/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar 10 15:55:09 2020
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
    vector<int> findMode(TreeNode* p) {
        vector<int> ans;
        if (p == NULL)
            return ans;
        stack<TreeNode *> st;
        int max_times = 1;
        int time = 1;
        int pre = -1;
        while (p != NULL || !st.empty()) {
            while(p) {
                st.push(p);
                p = p->left;
            }
            p = st.top();
            st.pop();
            int cur = p->val;
            if (cur == pre) {
                ++time;
            } else {
                pre = cur;
                time = 1;
            }
            if (time == max_times) {
                ans.push_back(cur);
            } else if (time > max_times) {
                ans.clear();
                ans.push_back(cur);
                max_times = time;
            }
            p = p->right;
        }
        return ans;
    }
};
