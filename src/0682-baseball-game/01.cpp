/*************************************************************************
# File Name: 01.cpp
# Author: Hing
# mail: hing123@126.com
# Created Time: Fri Jan 10 10:36:32 2020
 ************************************************************************/

class Solution {
public:
    int string_to_int(string s) {
        int n = 0;
        int dif = '0' - 0;
        int i = 1;
        if (s[0] != '-')
            i = 0;
        for (; i < s.size(); ++i) {
            n = n * 10 + s[i] - dif;
        }
        if (s[0] != '-')
            return n;
        else
            return -n;
    }
    int calPoints(vector<string>& ops) {
        vector<int> vi;
        for (int i = 0; i < ops.size(); ++i) {
            if (ops[i] == "C") {
                if (!vi.empty())
                    vi.pop_back();
            } else if (ops[i] == "D") {
                vi.push_back(2 * vi.back());
            } else if (ops[i] == "+") {
                vi.push_back(vi[vi.size() - 2] + vi.back());
            } else {
                vi.push_back(string_to_int(ops[i]));
            }
        }
        int score = 0;
        for (auto &i:vi)
            score += i;
        return score;
    }
};
