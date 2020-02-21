/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 14:43:02 2020
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
    int maxDepth(Node* root) {
        int height = 0;
        if (root != NULL) {
            vector<Node *> child = root->children;
            for (auto itr = root->children.begin(); itr != root->children.end(); ++itr)
                height = max(height, maxDepth(*itr));
            ++height;
        }
        return height;
    }
};

