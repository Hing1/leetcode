/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 14:53:36 2020
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
    vector<int> postorder(Node* root) {
        if (root) {
            for (int i = 0; i < root->children.size(); ++i) {
                postorder(root->children[i]);
            }
            ans.push_back(root->val);
        }
        return ans;
    }
};
