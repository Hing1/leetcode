/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Mar  5 10:23:06 2020
 ************************************************************************/

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> vi(num_people, 0);
        for (int i = 0; candies > 0; ++i) {
            int temp;
            if (candies >= i + 1)
                temp = i + 1;
            else
                temp = candies;
            vi[i % num_people] += temp;
            candies -= temp;
        }
        return vi;
    }
};
