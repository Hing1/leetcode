/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 17:04:44 2020
 ************************************************************************/

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            int gs = guess(mid);
            if (gs == 1) {
                left = mid + 1;
            } else if (gs == -1) {
                right = mid;
            } else {
                return mid;
            }
        }
        return left;
    }
};
