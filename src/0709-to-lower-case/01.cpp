class Solution {
public:
    string toLowerCase(string str) {
        int mask = 1 << 5;
        for (int i = 0; i < str.length(); ++i) {
            str.at(i) = str.at(i) | mask;
        }
        return str;
    }
};
