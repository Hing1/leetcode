/*************************************************************************
# File Name: 02.c
# Author: Kian Kwok
# Mail: kiankwok6@gmail.com
# Created Time: Tue May  5 22:40:25 2020
 ************************************************************************/

int charToInt(char ch) {
    if (ch == 'I') {
        return 1;
    } else if (ch == 'V') {
        return 5;
    } else if (ch == 'X') {
        return 10;
    } else if (ch == 'L') {
        return 50;
    } else if (ch == 'C') {
        return 100;
    } else if (ch == 'D') {
        return 500;
    } else {
        return 1000;
    }
}
int romanToInt(char * s){
    int ans = 0;
    while (*(s + 1)) {
        if (charToInt(*s) >= charToInt(*(s + 1))) {
            ans += charToInt(*s);
        } else {
            ans -= charToInt(*s);
        }
        ++s;
    }
    ans += charToInt(*s);
    return ans;
}

