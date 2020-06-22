/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Jun 22 12:45:15 2020
 ************************************************************************/

class Trie {
    struct TrieNode {
        bool isEnd;
        unordered_map<char, TrieNode *> children;
        TrieNode()
            : isEnd(false) {};
    };
    TrieNode *root;
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *t = root;
        for (int i = 0; i < word.size(); ++i) {
            if (!t->children.count(word[i])) {
                t->children.insert(pair(word[i], new TrieNode()));
            }
            t = t->children[word[i]];
        }
        t->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *t = root;
        for (int i = 0; i < word.size(); ++i) {
            if (!t->children.count(word[i])) {
                return false;
            }
            t = t->children[word[i]];
        }
        return t->isEnd;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *t = root;
        for (int i = 0; i < prefix.size(); ++i) {
            if (!t->children.count(prefix[i])) {
                return false;
            }
            t = t->children[prefix[i]];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
