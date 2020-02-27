/*************************************************************************
# File Name: 01.cpp
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Thu Feb 27 17:01:53 2020
 ************************************************************************/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int lenRansomNote = ransomNote.size();
        int lenMagazine = magazine.size();
        if (lenRansomNote > lenMagazine)
            return false;
        vector<int> ransomNoteVi(128, 0);
        vector<int> magazineVi(128, 0);
        for (int i = 0; i < lenRansomNote; ++i) {
            ++ransomNoteVi[ransomNote[i] - ' '];
        }
        for (int i = 0; i < lenMagazine; ++i) {
            ++magazineVi[magazine[i] - ' '];
        }
        for (int i = 0; i < 128; ++i) {
            if (ransomNoteVi[i] > magazineVi[i])
                return false;
        }
        return true;
    }
};
