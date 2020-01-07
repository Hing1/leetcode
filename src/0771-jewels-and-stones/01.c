/*************************************************************************
# File Name: 01.c
# Author: Hing
# mail: hing123@126.com
# Created Time: Tue Jan  7 16:30:40 2020
 ************************************************************************/

int numJewelsInStones(char* J, char* S) {
    int i,j,l1,l2,n=0;
    l1=strlen(J);
    l2=strlen(S);
    
    for(i=0;i<l1;i++) {
        for(j=0;j<l2;j++){
            if(J[i]==S[j])
                n++;
        }
    }
    return n;
}
