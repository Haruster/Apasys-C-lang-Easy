#include <stdio.h>

int main(void) {

    char alpha; //문자 변수

    printf("좋아하는 알파벳 스펠링을 입력하세요 : \n");
    scanf("%c", &alpha); //문자를 입력 받음

    printf("당신이 좋아하는 알파벳은 %c입니다. \n", alpha);

    return 0;

}