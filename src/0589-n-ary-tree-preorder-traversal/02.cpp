/*************************************************************************
# File Name: 02.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Aug 13 00:50:28 2020
 ************************************************************************/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int> ans;
public:
    vector<int> preorder(Node* root) {
        if (root) {
            ans.push_back(root->val);
            for (int i = 0; i < root->children.size(); ++i) {
                preorder(root->children[i]);
            }
        }
        return ans;
    }
};
