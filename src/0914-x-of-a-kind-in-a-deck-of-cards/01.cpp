/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri Mar 27 22:41:46 2020
 ************************************************************************/

class Solution {
    int gcd(int a, int b) {
        if (a == b) {
            return a;
        } else if (a > b) {
            return gcd(a - b, b);
        } else {
            return gcd(a, b - a);
        }
    }
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        vector<int> count(10000, 0);
        int maxNumb = deck[0];
        for (int i = 0; i < deck.size(); ++i) {
            maxNumb = max(maxNumb, deck[i]);
            ++count[deck[i]];
        }
        int key = 0;
        for (int i = 0; i <= maxNumb; ++i) {
            if (count[i]) {
                if (key == 0)
                    key = count[i];
                else
                    key = gcd(key, count[i]);
            }
        }
        return (key != 1);
    }
};
