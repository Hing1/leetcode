/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Jun 22 12:01:10 2020
 ************************************************************************/

#define N 26

typedef struct Trie_ {
    bool isEnd;
    struct Trie_ *children[N];
} Trie;

/** Initialize your data structure here. */

Trie* trieCreate() {
    Trie * obj = (Trie *) malloc (sizeof(Trie));
    if (NULL == obj)
        return NULL;
    obj->isEnd = false;
    for (int i = 0; i < N; ++i) {
        obj->children[i] = NULL;
    }
    return obj;
}

/** Inserts a word into the trie. */
void trieInsert(Trie* obj, char * word) {
    if (obj == NULL)
        return;
    for (int i = 0; word[i] != '\0'; ++i) {
        if(obj->children[word[i] - 'a'] == NULL)
            obj->children[word[i] - 'a'] = trieCreate();
        obj = obj->children[word[i] - 'a'];
    }
    obj->isEnd = true;
}

/** Returns if the word is in the trie. */
bool trieSearch(Trie* obj, char * word) {
    if (obj == NULL)
        return false;
    for (int i = 0; word[i] != '\0'; ++i) {
        if(obj->children[word[i] - 'a'] == NULL)
            return false;
        obj = obj->children[word[i] - 'a'];
    }
    return obj->isEnd;
}

/** Returns if there is any word in the trie that starts with the given prefix. */
bool trieStartsWith(Trie* obj, char * prefix) {
    if (obj == NULL)
        return false;
    for (int i = 0; prefix[i] != '\0'; ++i) {
        if(obj->children[prefix[i] - 'a'] == NULL)
            return false;
        obj = obj->children[prefix[i] - 'a'];
    }
    return true;
}

void trieFree(Trie* obj) {
    if (obj == NULL)
        return ;
    for (int i = 0; i < N; ++i) {
        trieFree(obj->children[i]);
    }
    free(obj);
}

/**
 * Your Trie struct will be instantiated and called as such:
 * Trie* obj = trieCreate();
 * trieInsert(obj, word);
 
 * bool param_2 = trieSearch(obj, word);
 
 * bool param_3 = trieStartsWith(obj, prefix);
 
 * trieFree(obj);
*/
