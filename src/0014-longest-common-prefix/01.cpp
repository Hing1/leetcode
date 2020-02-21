/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Mon Feb 17 00:10:45 2020
 ************************************************************************/

class Solution {
public:
    string lcp_of_two_str(string str1, string str2) {
        if (str1.size() == 0 || str2.size() == 0)
            return "";
        string ans = "";
        for (int i = 0; i < str1.size() && i < str2.size(); ++i) {
            if (str1[i] == str2[i])
                ans+=str1[i];
            else
                break;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        string ans = strs[0];
        if (strs.size() == 1)
            return ans;
        for (int i = 1; i < strs.size(); ++i) {
            ans = lcp_of_two_str(ans, strs[i]);
        }
        return ans;
    }
};
