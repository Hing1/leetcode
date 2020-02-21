/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Mon Jan 27 11:54:29 2020
 ************************************************************************/

class Solution {
public:
    int maximum69Number (int num) {
        vector<int> vi;
        while (num) {
            vi.push_back(num % 10);
            num /= 10;
        }
        for (int i = vi.size() - 1; i >= 0; --i) {
            if (vi[i] == 6) {
                vi[i] = 9;
                break;
            }
        }
        int ans = 0;
        for (int i = vi.size() - 1; i >= 0; --i) {
            ans = ans * 10 + vi[i];
        }
        return ans;
    }
};
