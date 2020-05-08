/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Fri May  8 22:11:54 2020
 ************************************************************************/

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trustPeople(N + 1, 0);
        vector<int> trustedPeople(N + 1, 0);
        for (int i = 0; i < trust.size(); ++i) {
            ++trustPeople[trust[i][0]];
            ++trustedPeople[trust[i][1]];
        }
        bool hasJudge = false;
        int judge = -1;
        for (int i  = 1; i <= N; ++i) {
            if (trustPeople[i] == 0 && trustedPeople[i] == N - 1) {
                if (hasJudge)
                    return -1;
                judge = i;
                hasJudge = true;
            }
        }
        return judge;
    }
};
