/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Mar 10 16:06:43 2020
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
class BSTIterator {
    TreeNode *root_;
    stack<TreeNode *> st;
    TreeNode *p;
public:
    BSTIterator(TreeNode* root)
        :root_(root), p(root) {}
    
    /** @return the next smallest number */
    int next() {
        if(!hasNext())
            return -1;
        while(p) {
            st.push(p);
            p = p->left;
        }
        p = st.top();
        st.pop();
        TreeNode *temp = p;
        p = p->right;
        return temp->val;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return (p || !st.empty());
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
