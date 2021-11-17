// 포인터를 이용하여 문자열 출력하기

#include <stdio.h>

int main(void) {

    char *pC = "C programming";

    printf("문자열을 변환기호를 이용해서 출력\n");
    printf("%s\n", pC); 
    printf("반복문을 이용해 한 글자씩 출력\n");

    while(*pC)

        printf("%c", *pC++);

    printf("\n");

    return 0;




}