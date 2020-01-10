/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Fri Jan 10 08:38:27 2020
 ************************************************************************/

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        while (!q_.empty()) {
            temp_.push(q_.front());
            q_.pop();
        }
        q_.push(x);
        while (!temp_.empty()) {
            q_.push(temp_.front());
            temp_.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int n = q_.front();
        q_.pop();
        return n;
    }
    
    /** Get the top element. */
    int top() {
        return q_.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q_.empty();
    }
private:
    queue<int> q_, temp_;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
