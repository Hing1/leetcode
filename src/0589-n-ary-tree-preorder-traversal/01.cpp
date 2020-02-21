/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 14:50:43 2020
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
public:
    vector<int> preorder(Node* root) {
        vector<int> vi;
        if (root != NULL) {
            vi.push_back(root->val);
            vector<Node *>child = root->children;
            for (auto itr1 = root->children.begin(); itr1 != root->children.end(); ++itr1) {
                vector<int> temp = preorder(*itr1);
                for (auto itr2 = temp.begin(); itr2 != temp.end(); ++itr2) {
                    vi.push_back(*itr2);
                }
            }
        }
        return vi;
    }
};

