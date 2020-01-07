/*************************************************************************
# File Name: 01.c
# Author: Hing
# mail: hing123@126.com
# Created Time: Tue Jan  7 16:34:29 2020
 ************************************************************************/

bool judgeCircle(char* moves) {
    int r = 0, l = 0, u = 0,d = 0;
    int i, len;
    len=strlen(moves);
    for(i=0;i<len;i++) {
        switch(moves[i]) {
            case 'R':r++;break;
            case 'L':l++;break;
            case 'U':u++;break;
            case 'D':d++;break;
        }
    }
    if(r==l&&u==d)
        return true;
    else
        return false;
}