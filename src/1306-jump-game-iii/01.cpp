/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# Mail: hing123@126.com
# Created Time: Mon Jan 27 13:41:41 2020
 ************************************************************************/

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if (start >= arr.size())
            return false;
        vector<int> vi(arr.size(), 0);
        stack<int> si;
        si.push(start);
        vi[start] = 1;
        while (!si.empty()) {
            int temp = si.top();
            si.pop();
            if (arr[temp] == 0) {
                return true;
            }
            int idx = temp + arr[temp];
            if (idx < arr.size()) {
                if (!vi[idx]) {
                    si.push(idx);
                    vi[idx] = 1;
                }
            }
            idx = temp - arr[temp];
            if (idx >= 0) {
                if (!vi[idx]) {
                    si.push(idx);
                    vi[idx] = 1;
                }
            }
        }
        return false;
    }
};
