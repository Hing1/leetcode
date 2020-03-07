/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Mar  7 18:34:51 2020
 ************************************************************************/

class MaxQueue {
public:
    MaxQueue()
        :maxV(-1), maxCount(0) {}

    int max_value() {
        return maxV;
    }
    
    void push_back(int value) {
        if (li.empty()) {
            maxV = value;
            ++maxCount;
        } else if (maxV < value) {
            maxV = value;
            maxCount = 1;
        } else if (maxV == value) {
            ++maxCount;
        }
        li.push_back(value);
    }
    
    int pop_front() {
        if (li.empty())
            return -1;
        int temp = li.front();
        li.pop_front();
        if (temp == maxV)
            --maxCount;
        if (maxCount == 0) {
            if (li.empty()) {
                maxV = -1;
            } else {
                maxV = li.front();
                for (auto i = li.begin(); i != li.end(); ++i) {
                    if (*i > maxV) {
                        maxV = *i;
                        maxCount = 1;
                    } else if (*i == maxV) {
                        ++maxCount;
                    }
                }
            }
        }
        return temp;
    }
private:
    list<int> li;
    int maxV;
    int maxCount;
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */
