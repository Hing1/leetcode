/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 13:52:35 2020
 ************************************************************************/

int game(int* guess, int guessSize, int* answer, int answerSize){
    int count = 0;
    for (int i = 0; i < guessSize && i < answerSize; ++i) {
        if (guess[i] == answer[i])
            ++count;
    }
    return count;
}

