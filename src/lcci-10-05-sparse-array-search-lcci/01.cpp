/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Sat Aug 22 14:50:27 2020
 ************************************************************************/

class Solution {
public:
    int findString(vector<string>& words, string s) {
        int left = 0;
        int right = words.size() - 1;
        while (left <= right) {
            while (words[left] == "")
                ++left;
            while (words[right] == "")
                --right;
            int mid = left + (right - left) / 2;
            while (mid < right && words[mid] == "")
                ++mid;
            if (words[mid] == s) {
                return mid;
            } else if (words[mid] < s) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
};
