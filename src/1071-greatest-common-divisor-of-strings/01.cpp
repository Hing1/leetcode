/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Mar 12 09:56:30 2020
 ************************************************************************/

class Solution {
public:
    int gcd(int a, int b) {
        if (a == b)
            return a;
        return (a > b) ? gcd(a - b, b) : gcd(a, b - a);
    }
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.size();
        int len2 = str2.size();
        int lenCDS = gcd(len1, len2);
        string ans(lenCDS, 'a');
        for (int i = 0; i < lenCDS; ++i) {
            if (str1[i] != str2[i])
                return "";
            ans[i] = str1[i];
        }
        for (int i = lenCDS; i < len1; ++i) {
            if (ans[i % lenCDS] != str1[i])
                return "";
        }
        for (int i = lenCDS; i < len2; ++i) {
            if (ans[i % lenCDS] != str2[i])
                return "";
        }
        return ans;
    }
};
