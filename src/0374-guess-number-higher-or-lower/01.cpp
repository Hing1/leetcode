/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 17:04:44 2020
 ************************************************************************/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return       -1 if num is lower than the guess number
 *                1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int temp = guess(mid);
            if (temp == 0) {
                return mid;
            } else if (temp == 1) {
                left = mid + 1;
            } else if (temp == -1) {
                right = mid - 1;
            }
        }
        return -1;
    }
};