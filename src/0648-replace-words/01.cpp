/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Jun 22 14:56:55 2020
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
    Trie() {
        root = new TrieNode();
    }
    void insert(string word) {
        TrieNode *t = root;
        for (int i = 0; i < word.size(); ++i) {
            if (!t->children.count(word[i])) {
                t->children.insert(pair(word[i], new TrieNode()));
            }
            t = t->children[ word[i] ];
        }
        t->isEnd = true;
    }
    string searchRoot(string word) {
        TrieNode *t = root;
        string temp = "";
        for (int i = 0; i < word.size(); ++i) {
            if (t->isEnd)
                return temp;
            if (!t->children.count(word[i])) {
                return word;
            }
            temp += word[i];
            t = t->children[word[i]];
        }
        return temp;
    }
};

class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        Trie root;
        for (int i = 0; i < dict.size(); ++i) {
            root.insert(dict[i]);
        }
        string ans;
        string word;
        for (int i = 0; i < sentence.size(); ++i) {
            if (sentence[i] != ' ') {
                word += sentence[i];
            } else {
                ans += root.searchRoot(word);
                ans += ' ';
                word = "";
            }
        }
        ans += root.searchRoot(word);
        return ans;
    }
};