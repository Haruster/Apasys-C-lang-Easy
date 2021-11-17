// 포인터 배열을 이용하여 문자열 출력하기

#include <stdio.h>

int main(void) {

    char *pStr[] = {"english", "math", "korean"};
    char subject[][8] = {"english", "math", "korean"};


    int i;

    printf("포인터 배열을 이용해서 문자열을 출력합니다.\n");

    for(i = 0; i < 3; i++) 

        printf("pStr[%d] = %s\n", i, pStr[i]);

    printf("2차원 배열을 이용해서 문자열을 출력합니다.\n");

    for(i = 0; i < 3; i++) 

        printf("subject[%d] = %s\n", i, subject[i]);

    return 0;

}