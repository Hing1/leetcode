/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Mar 12 13:39:10 2020
 ************************************************************************/

class MyCmp {
    int numOfOnes(int n) {
        int count = 0;
        while (n) {
            if (n % 2)
                ++count;
            n = n / 2;
        }
        return count;
    }
public:
    bool operator() (int a, int b) {
        int ANumOne = numOfOnes(a);
        int BNumOne = numOfOnes(b);
        return (ANumOne == BNumOne) ? (a < b) : (ANumOne < BNumOne);
    }
};
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), MyCmp());
        return arr;
    }
};
