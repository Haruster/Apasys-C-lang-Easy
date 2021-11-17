// 문자 처리 함수 이용하기

#include <stdio.h>
#include <ctype.c>

int main(void) {

    char *pC = "c language";

    while(*pC) {

        printf("%c", toupper(*pC++));

    }

    printf("\n");

    return 0;

}