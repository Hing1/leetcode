/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 03:01:19 2020
 ************************************************************************/

class MyQueue {
    stack<int> si;
public:
    /** Initialize your data structure here. */
    MyQueue() {}
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack<int> temp;
        while (!si.empty()) {
            temp.push(si.top());
            si.pop();
        }
        si.push(x);
        while (!temp.empty()) {
            si.push(temp.top());
            temp.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int temp = si.top();
        si.pop();
        return temp;
    }
    
    /** Get the front element. */
    int peek() {
        return si.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return si.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
