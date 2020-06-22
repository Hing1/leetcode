/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Jun 22 13:13:17 2020
 ************************************************************************/

class MapSum {
    struct TrieNode {
        bool isEnd;
        int data;
        unordered_map<char, TrieNode *> children;
        TrieNode()
            : isEnd(false), data(0) {};
    };
    TrieNode *root;
    int sumAll(TrieNode *t){
        int sum = t->data;
        for(auto &itr : t->children){
            sum += sumAll(itr.second);
        }
        return sum;
    }
public:
    /** Initialize your data structure here. */
    MapSum() {
        root = new TrieNode();
    }
    
    void insert(string word, int val) {
        TrieNode *t = root;
        for (int i = 0; i < word.size(); ++i) {
            if (!t->children.count(word[i])) {
                t->children.insert(pair(word[i], new TrieNode()));
            }
            t = t->children[ word[i] ];
        }
        t->isEnd = true;
        t->data = val;
    }
    
    int sum(string prefix) {
        TrieNode *t = root;
        for (int i = 0; i < prefix.size(); ++i) {
            if (!t->children.count(prefix[i])) {
                return 0;
            }
            t = t->children[ prefix[i] ];
        }
        return sumAll(t);
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
