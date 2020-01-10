/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Fri Jan 10 09:18:26 2020
 ************************************************************************/

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {}
    
    void push(int x) {
        if (vi_.empty() || x < min_) {
            min_ = x;
        }
        vi_.push_back(x);
    }
    
    void pop() {
        int temp = vi_.back();
        vi_.pop_back();
        if (temp <= min_) {
            min_ = refresh_min();
        }
    }
    int refresh_min() {
        min_ = vi_[0];
        for (auto itr = vi_.begin(); itr != vi_.end(); ++itr) {
            if (*itr < min_)
                min_ = *itr;
        }
        return min_;
    }
    
    int top() {
        return vi_.back();
    }
    
    int getMin() {
        return min_;
    }
private:
    vector<int> vi_;
    int min_;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
