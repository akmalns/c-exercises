#include <stdio.h>

int main(){
    char char1='X', char2='M', char3='L';

    printf("The reverse of %c%c%c is %c%c%c\n", char1,char2,char3,char3,char2,char1);


    return 0;
}

/*
LESSON LEARNED

1. When assigning char, use only single quote. Using double quote will cast it into pointer of char
*/