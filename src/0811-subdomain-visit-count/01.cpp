/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Aug 27 21:08:47 2020
 ************************************************************************/

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> mpsi;
        for (int i = 0; i < cpdomains.size(); ++i) {
            string domain;
            int count = 0;
            for (int j = 0; cpdomains[i][j] != ' '; ++j) {
                count = count * 10 + (cpdomains[i][j] - '0');
            }
            for (int j = cpdomains[i].size() - 1; cpdomains[i][j + 1] != ' '; --j) {
                if (cpdomains[i][j] == '.' || cpdomains[i][j] == ' ') {
                    string rev(domain);
                    int len = domain.size();
                    for (int k = 0; k < len; ++k) {
                        rev[k] = domain[len - 1 - k];
                    }
                    mpsi[rev] += count;
                }
                domain += cpdomains[i][j];
            }
        }
        vector<string> ans;
        for (auto itr = mpsi.begin(); itr != mpsi.end(); ++itr) {
            ans.push_back(to_string(itr->second) + " " + itr->first);
        }
        return ans;
    }
};
