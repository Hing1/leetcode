/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Aug 17 03:39:19 2020
 ************************************************************************/

class RecentCounter {
    queue<int> qi;
public:
    RecentCounter() {}
    
    int ping(int t) {
        qi.push(t);
        while (qi.front() < t - 3000) {
            qi.pop();
        }
        return qi.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
