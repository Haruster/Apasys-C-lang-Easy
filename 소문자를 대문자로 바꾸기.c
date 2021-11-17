// 소문자를 대문자로 바꾸기

#include <stdio.h>

int main(void) {

    char *pC = "c language";

    while (*pC) {

        printf("%c", *pC - 32);

        pC++;

    }

    printf("\n"); 

    return 0;

}