/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue Jun 30 16:31:08 2020
 ************************************************************************/

class CQueue {
    stack<int> sti;
public:
    CQueue() {}
    void appendTail(int value) {
        sti.push(value);
    }
    int deleteHead() {
        stack<int> temp;
        while (!sti.empty()) {
            temp.push(sti.top());
            sti.pop();
        }
        int ans = -1;
        if (!temp.empty()) {
            ans = temp.top();
            temp.pop();
        }
        while (!temp.empty()) {
            sti.push(temp.top());
            temp.pop();
        }
        return ans;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
