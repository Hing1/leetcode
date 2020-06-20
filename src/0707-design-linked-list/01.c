/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sun Jun 14 23:34:01 2020
 ************************************************************************/

typedef struct Node{
    int data;
    struct Node *next;
} MyLinkedList;

/** Initialize your data structure here. */

MyLinkedList* myLinkedListCreate() {
    MyLinkedList *head = (MyLinkedList *) malloc (sizeof (MyLinkedList));
    head->next = NULL;
    return head;
}

/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int myLinkedListGet(MyLinkedList* head, int index) {
    if (NULL == head)
        return -1;
    for (int i = 0; head->next; ++i) {
        if (i == index)
            return head->next->data;
        head = head->next;
    }
    return -1;
}

/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
void myLinkedListAddAtHead(MyLinkedList* head, int val) {
    if (NULL == head)
        return ;
    MyLinkedList *temp = (MyLinkedList *) malloc (sizeof (MyLinkedList));
    temp->data = val;
    temp->next = head->next;
    head->next = temp;
}

/** Append a node of value val to the last element of the linked list. */
void myLinkedListAddAtTail(MyLinkedList* head, int val) {
    if (NULL == head)
        return ;
    while(head->next) {
        head = head->next;
    }
    MyLinkedList *temp = (MyLinkedList *) malloc (sizeof (MyLinkedList));
    temp->data = val;
    temp->next = NULL;
    head->next = temp;
}

/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void myLinkedListAddAtIndex(MyLinkedList* head, int index, int val) {
    if (NULL == head)
        return ;
    while (head->next && index) {
        head = head->next;
        --index;
    }
    if (index == 0) {
        myLinkedListAddAtHead(head, val);
    }
    return ;
}

/** Delete the index-th node in the linked list, if the index is valid. */
void myLinkedListDeleteAtIndex(MyLinkedList* head, int index) {
    if (NULL == head)
        return ;
    for (int i = 0; head->next; ++i) {
        if (i == index) {
            MyLinkedList *temp = head->next;
            head->next = temp->next;
            free(temp);
            return ;
        }
        head = head->next;
    }
    return -1;
}

void myLinkedListFree(MyLinkedList* head) {
    while(head) {
        MyLinkedList *temp = head;
        head = head->next;
        free(temp);
    }
    return ;
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/
